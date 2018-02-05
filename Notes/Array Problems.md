# Array Problems

## Introduction

This is a collection of problems that shows some good techniques on how to solve problems with arrays.

Most of these problems have obvious inefficient solutions, but a very effecient O(N) solution, _where N is the number of items in the array_

### Running statistics

#### Case 1 (Running Sum)

TBA

#### Case 2 (Running Minimum)

> You are given the following two arrays, an array of meat needed each day, and the price of meat each day. What is the minimum amount of money that needs to be spent in order to buy meat so it is always enough? (http://codeforces.com/problemset/problem/588/A)

Approach:
1. The key insight is to realize that on each day, we know how much meat we need.
2. All we need to do now is buy the meat on the day/previous day where the meat price is minimal.
3. A naive approach would be to do a loop backwards for each day, but we could just keep a running minimum.

```c++
int solve(vi &need, vi &prices) {
  int N = need.size();
  int ans = 0, mn = INF;
  for (int i=0;i<N;i++) {
    mn = min(mn, prices[i]);
    ans += need[i]*mn;
  }
  return ans;
}
```

<hr />

### Prefix and Suffix arrays

#### Case 1 (Prefix sums)

> You are given a string S of '.'s and '#'s, and ranged queries to answer about the string. Each query asks how many S[i] = S[i+1] in the specified substring. (http://codeforces.com/problemset/problem/313/B)

Approach:
1. From S, we can create an array A, where A[i] = 1 if S[i] = S[i+1] and 0 otherwise.
2. We can then compute a prefix sum array from A, which allows us to answer the queries in O(1).

```c++
void solve(string S, vector<pii> &Q) {
  int N = S.size();
  vi A(N);
  for (int i=0;i<N-1;i++)
    A[i] = S[i] == S[i+1];
  vi sum(N);
  for (int i=1;i<=N;i++)
    sum[i] = sum[i-1] + A[i-1];
  int M = Q.size();
  for (int i=0;i<M;i++)
    cout << sum[Q[i].second-1] - sum[Q[i].first-1] << endl;
}
```

#### Case 2 (Suffix counts)

> You are given an array of integers, and queries about the array. Each query specifies l_i, asking for how many distinct integers appear in A[l_i..N] (http://codeforces.com/problemset/problem/368/B)

Approach:
1. From A, we can make use of a hash set to compute a suffix count array.
2. Using this suffix count array, we can easily answer the queries in O(1).

```c++
void solve(vi &A, vi &Q) {
  int N = S.size();
  unordered_set<int> seen;
  vi count(N);
  for (int i=N-1;i>=0;i--) {
    seen.insert(A[i]);
    count[i] = seen.size();
  }
  int M = Q.size();
  for (int i=0;i<M;i++)
    cout << count[Q[i]] << endl;
}
```

#### Case 3 (Prefix/Suffix minimums)

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

### Longest subarray/subsegment

#### Case 1 (Increasing Subarray)

> You are given an array, which is a permutation of integers from 1 to N. In an action, you are able to move an element to the front/end of the array. What is the minimum number of actions to transform it into a sorted array? (http://codeforces.com/problemset/problem/605/A)

Approach:
1. There will only be a certain set of elements that we need to remove
2. If we know the elements we should remove, the untouched elements would be a continuous sequence a,a+1,a+2,a+3,....,a+k
    - Note that the longest sequence will be help determine the solution, as this means less elements need to be moved.
3. Knowing this, we could produce a _pos_ array.
    - We could now use the longest increasing subarray algorithm to find the answer

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
  return N - ans;
}
```
