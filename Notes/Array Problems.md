# Array Problems

## Introduction

This is a collection of problems that require a good understanding on how to work with arrays (usually containing integers).

Most of these problems have obvious inefficient solutions, but a very effecient O(N) solution, _where N is the number of items in the array_

### Prefix and Suffix arrays

#### Case 1 (Prefix/Suffix sums)

TBA

#### Case 2 (Prefix/Suffix minimums)

> Divide an array into 2 continuous segments, and find the greatest value for the maximum of the minimum of both segments. (http://codeforces.com/contest/870/problem/B)

Approach:
1. Produce the following prefix and suffix arrays:-
    - mnL, where mnL[i] gives the minimum from 0..i
    - mnR, where mnR[i] gives the minimum from i..N-1
2. Using these arrays, iterate through 0..N-2 (the possible values for left segment to end), and find the largest value of max(mnL[i], mnR[i+1])

```c++
int solve(vi &A) {
  int N = A.size();
  vi mnL(N), mnR(N);
  mnL[0] = A[0]; mnR[N-1] = A[N-1];
  for (int i=1;i<N;i++) mnL[i] = min(mnL[i-1], A[i]);
  for (int i=N-2;i>=0;i--) mnR[i] = min(mnR[i+1], A[i]);
  int ans = mnL[0];
  for (int i=0;i<N-1;i++) {
    ans = max(ans, max(mnL[i], mnR[i+1]));
  }
  return ans;
}
```

**Advanced**

We can actually prove that the answer is the maximum of the first and last element in A

Reason:-
1. If A[0] or A[N-1] is the maximum element in A, this is obvious
2. If neither A[0] or A[N-1] is the maximum, that means that the maximum element is inside A
    - however, it could never be the solution, since the smaller A[0] or A[N-1] will be chosen
3. In fact, the previous fact applies to all elements larger than A[0] and A[N-1].
    - This means that the possible solutions are either A[0], A[N-1] or smaller/equal elements.
4. It is obvious that we do not want smaller elements. The solution is thus either A[0] or A[N-1], so we take the maximum.

<hr />

### Longest length of increasing segment

> Given an array, which is a permutation of integers from 1 to N, you are able to perform a move to move an element to the front/end of the array. What is the minimum number of moves to produce a sorted array? (http://codeforces.com/problemset/problem/605/A)

Approach:
1. There will only be a certain set of elements that we need to remove
2. If we remove these elements, we have a continuous segment a,a+1,a+2,a+3,....,a+k
    - Note that the longest segment will be the solution, as we will move less elements.
3. Knowing this, we could produce a pos array. We could now use it to find the longest increasing segment

```c++
int solve(vi &A) {
  int N = A.size();
  vi pos(N+1);
  for (int i=0;i<N;i++) pos[A[i]] = i;
  int ans = 0, cur = 1;
  for (int i=2;i<=N;i++) {
    if (pos[i] > pos[i-1]) cur++;
    else cur = 1;
    ans = max(ans, cur);
  }
  return ans;
}
```
