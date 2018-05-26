# Game Theory

## Introduction

This is one of my favorite topics, because its about finding the best ways to win games! Who doesn't like winning? 😜🏆

There are two types of games:-
 1. Partial Games
	 > Games where each player has their own pieces and moves. e.g. Chess, Checkers, Tic-Tac-Toe
 2. Impartial Games
	 > Games where both players have the same pieces and moves. e.g. Nim

## Partial Games

The simplest way to find winning moves for partial games would be a brute force recursive function, canWin(), that tries all possible moves. 

```c++
bool canWin(GameState gameState, int curPlayer) {
  vector<Move> moves = getMoves(gameState, curPlayer);
  for (Move move : moves) {
    // make this move
    makeMove(gameState, move);
    
    // try this move
    bool canNextPlayerWin = canWin(gameState, 1-curPlayer);
    
    // undo the move after trying
    undoMove(gameState, move);
    
    // if this moves cause the next player to lose, we have a winning move
    if (!canNextPlayerWin) return true;
  }
  // none of the moves are winning
  return false;
}
```

### Extensions

Obviously, this technique is extremely slow for large **N**. We could perform some memoization to speed up, but in average/worst cases, the algorithm still runs in **non-polynomial time**

There are some improvements to this:-
 1. Pruning (Alpha-Beta)
 2. Minimax
 3. Expectimax

For now, I am not aware of any better algorithms for partial games.

## Impartial Games

Similar to partial games, we can use a brute force algorithm to find winning moves. Since there are no player-specific moves, we could omit the curPlayer argument as follows

```c++
bool canWin(GameState gameState) {
  vector<Move> moves = getMoves(gameState);
  for (Move move : moves) {
    // make this move
    makeMove(gameState, move);
    
    // try this move
    bool canNextPlayerWin = canWin(gameState);
    
    // undo the move after trying
    undoMove(gameState, move);
    
    // if this moves cause the next player to lose, we have a winning move    
    if (!canNextPlayerWin) return true;
  }
  // none of the moves are winning
  return false;
}
```

**However, there are better ways to solve impartial games, i.e. Sprague Grundy.**

## Sprague Grundy

The Sprague Grundy theorem is a game theory concept that applies to **all impartial games**. 

The theorem uses the following concepts:-

 1. Minimum Excludant (MEX)
     > The smallest non-negative number that is excluded in a set
 2. Grundy Number (Nimber)
     > A number representing the state/position of a game

#### MEX

A very simple concept. We look for the smallest non-negative number (starting from 0) that is not in the set.

```c++
int mex(set<int> &grundies) {
  int res = 0;
  for (int num : grundies) {
    if (res != num) return res;
    res = num+1;
  }
  return res;
}
```

#### Grundy Number

The grundy number is a non-negative number used to represent a game state/position. 

***For a losing position, grundy number = 0***

To calculate this:-

 1. Get a set of grundy numbers for the next possible game states
 2. Get the MEX of the set

```c++
map<GameState, int> memo;

int grundy(GameState gameState) {
  if (isLosing(gameState)) return 0;
  else if (memo.count(gameState)) return memo[gameState];
  
  // get moves
  vector<Move> moves = getMoves(gameState);
  
  // get a set of grundy numbers
  set<int> grundies;
  for (Move move : moves) {
    // make this move
    makeMove(gameState, move);
    
    // get the grundy number of the resulting game state
    grundies.insert(grundy(gameState));
    
    // undo the move after trying
    undoMove(gameState, move);
  }
  return memo[gameState] = mex(grundies);
}
```

Note that we use memoization (dynamic programming) to avoid repeated work!

## Example with Nim

Nim is a classic game theory example, where players take turn taking stones from a pile. The loser is the one who is unable to make a move.

For this example, let us assume the valid moves each turn are taking 1, 2 or 4 stones.

The following shows how we can compute the grundy numbers for this game:-

```
g[0] = 0 						// 0 stones symbolize a losing position, so we initialize this
g[1] = MEX({ g[0] }) 		 = MEX({ 0 }) 	    = 1 // g[0], since we can remove 1 stone
g[2] = MEX({ g[0], g[1] }) 	 = MEX({ 0, 1 })    = 2 // g[0], g[1], remove 1 and 2 stones
g[3] = MEX({ g[1], g[2] }) 	 = MEX({ 0, 1 })    = 2 // g[1], g[2], remove 1 and 2 stones
g[4] = MEX({ g[0], g[2], g[3] }) = MEX({ 0, 2, 2 }) = 1 // g[0], g[2], g[3] remove 1, 2 and 4 stones
g[5] = MEX({ g[1], g[3], g[4] }) = MEX({ 1, 2, 1 }) = 0 // No way to win, since g[5] = 0
g[6] = MEX({ g[1], g[3], g[4] }) = MEX({ 1, 2, 1 }) = 0 // No way to win, since g[6] = 0
```

The grundy numbers is very similar to the concept of **_N_**-positions and **_P_**-positions
> The **_N_**-position symbolizes a winning position for the next player (current player)
>
> The **_P_**-position symbolizes a winning position for the previous player

If all moves at the current position leads to only **_N_**-positions, that means that the current position is a **_P_**-position (losing position). Otherwise, it is a **_N_**-position.

#### Example Code

```c++
vector<int> memo(MAXN, -1);

int mex(set<int> &grundies) {
  int res = 0;
  for (int num : grundies) {
    if (res != num) return res;
    res = num+1;
  }
  return res;
}

int grundy(int num) {
  if (num == 0) return 0;
  else if (memo[num] != -1) return memo[num];
  
  set<int> grundies;
  if (num >= 1) grundies.insert(grundy(num-1));
  if (num >= 2) grundies.insert(grundy(num-2));
  if (num >= 4) grundies.insert(grundy(num-4));
  
  // grundy number for this position is the MEX of the grundy numbers for possible next positions
  return memo[num] = mex(grundies);
}

bool canWin(int stonesInPile) {	
  // we win if grundy number is greater than 0
  return grundy(stonesInPile) > 0;
}
```

## Simultaneous games

An interesting property of Sprague Grundy is that it can be used to determine wins for simultaneous impartial games.

E.g. Nim with multiple piles of stones

To calculate this, we take the **XOR** of the grundy numbers in each game to get the **Overall Grundy Number**.

Similarly, if this number = 0, the current player has no winning move

In fact, this idea can be used for moves which might create more simultaneous games, as follows

## Example (A String Game)

> We have a string consisting of x's and o's, players take turns flipping "xx"s into "oo"s. The loser is the one who cannot make a move
> 
> Given the game state and that you are the current player to move, write a function that determines if you can win.

#### Naive solution

We can easily implement the brute force solution as follows:

```c++
map<string, bool> memo;

bool canWin(string &S) {
  if (memo.count(S)) return memo[S];
  int N = S.size();
  for (int i=0;i+1<N;i++) {
    if (S.substr(i,2) == "--") {
      S[i] = S[i+1] = '+';
      bool res = canWin(S);
      S[i] = S[i+1] = '-';
      if (!res) return memo[S] = true;
    }
  }
  return memo[S] = false;
}
```

Note that I used memoization to improve this (yay!), but this is still far too slow in average and worst cases; still non-polynomial time.

Time Complexity: **O(N!)**

#### Insights

 1. This is an impartial game. Thus, we can apply the Sprague Grundy theorem.
 2. Each substring of x's is a game. We can use the **simultaneous games** concept to solve this problem
 3. A move will create more simultaneous games, which we can use the **XOR** technique to find the grundy number.
	 - Example: xxxxx
		 - ooxxx leads to game(0) and game(3)
		 - xooxx leads to game(1) and game(2)
		 - xxoox leads to game(1) and game(2) 
		 - xxxoo leads to game(0) and game(3)
	 - Grundy number for this position is MEX({ g(0) ^ g(3), g(1) ^ g(2) })
	 - Note that we can optimize this by going up to **N/2**

#### Sample Solution

```c++
vector<int> memo(MAXN, -1);

vi getSubgames(string &S) {
  int N = S.size();
  vi subgames;
  int i=0,j=0;
  while (i<N) {
    while (i < N && S[i] == 'o') i++;
    j = i;
    while (j < N && S[j] == 'x') j++;
    subgames.push_back(j-i);
    i = j;
  }
  return subgames;
}

int mex(set<int> &grundies) {	
  int res = 0;
  for (int num : grundies) {
    if (res != num) return res;
    res = num+1;
  }
  return res;
}

int grundy(int num) {
  if (memo[n] != -1) return memo[n];
  set<int> grundies;
  for (int i=0;i<n/2;i++) grundies.insert(grundy(i)^grundy(n-i-2));
  return memo[n] = mex(grundies);
}

bool canWin(string &S) {
  vi subgames = getSubgames(S);
  int N = subgames.size();
  int res = 0;
  for (int i=0;i<N;i++) res ^= grundy(subgames[i]);
  return res > 0;
}
```

Time Complexity: **O(N^2)**

## Conclusion

There is still so much I need to learn to understand Game Theory more, but I guess I wanted to share the most useful thing I've learnt, which is the Sprague Grundy theorem for impartial games
