# Array Problems

## Introduction

This is a collection of problems that shows some good techniques on how to solve problems with arrays.

Most of these problems have obvious inefficient solutions, but a very effecient O(N) solution, _where N is the number of items in the array_

### Two Pointers (or more)

#### Case 1 (Two Sum)

> You are given a sorted array, and an integer X. Your goal is to determine if there are two numbers in the array that sums to X.

Approach:
1. The most obvious solution would be to use a nested loop to check if 2 numbers add to X.
    - In a way, this is using two pointers, but just not effectively!
2. Instead, let us take advantage of the fact that the array is sorted.
3. We start with two pointers, and set them to the far extremes, i.e. i=0, j=N-1
4. If A[i] + A[j] < X, we know that we can increase it by incrementing i. Likewise, if A[i] + A[j] > X, we can decrease it by decrementing j.
5. Following this, we can approach the solution, if it exists! In the worst case, both these pointers would move to the opposite end (but just once), so it is bounded by O(N)

```c++
bool solve(vi &A, int X) {
  int N = A.size();
  int i=0,j=N-1;
  while (i < j) {
    if (A[i] + A[j] == X) return true;
    else if (A[i] + A[j] < X) i++;
    else j--;
  }
  return false;
}
```

#### Case 2 (Groups with abs difference < X)

> You are given an array of pairs, representing the amount of money and friendship factor of each friend. Find the maximum friendship factor that can be obtained from a group of those friends, where the difference in money is less than X. http://codeforces.com/problemset/problem/580/B

Approach:
1. Again, we can use the method of two pointers.
2. This time, we use one pointer to iterate over the array indices.
3. We use the other pointer, moving it to the right while the difference between money_j and money_i is less than X.

```c++
int solve(vector<pii> &A, int X) {
  int N = A.size();
  sort(A.begin(), A.end());
  int j=0,ans=0,sum=0;
  for (int i=0;i<N;i++) {
    if (i) sum -= A[i-1].second;
    while (j<N && A[j].first-A[i].first < X) {
      sum += A[j].second;
      j++;
    }
    ans = max(ans, sum);
  }
  return ans;
}
```

<hr />

### Running statistics

#### Case 1 (Running Count)

> You are given a string of letters. Count the total number of subsequences containing QAQ.
http://codeforces.com/problemset/problem/894/A

Approach:
1. A good strategy is to iterate through the string, and every time we encounter 'A', we count the number of Qs to the left and right
    - The total ways we could form QAQ would be the multiplication of the Qs to the left and right
2. Instead of counting inefficiently each time, we can count the number of Qs overall, and keep a running count

```c++
ll solve(string S) {
  int N = S.size(), nQ = count(S.begin(), S.end(), 'Q');
  ll ans = 0, cnt = 0;
  for (char c : S) {
    if (c == 'Q') cnt++;
    else if (c == 'A') {
      // cnt gives #Qs to the left, while N-cnt gives #Qs to the right
      ans += cnt*(N-cnt);
    }
  }
  return ans;
}
```

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

### Median

#### Case 1 (Point with minimum sum distance)

> You are given an array, representing x-coordinates on the y-axis. Find the point X, where the sum of distances from X to all the other points is minimal. http://codeforces.com/problemset/problem/710/B

Approach:
1. One mistake it to assume the average of the points.
    - Suppose we have three points, 0, 6, 10.
    - The average would suggest to meet at 5, which results in 5+1+5 = 11.
    - However, the optimal answer would be to meet at 6, which results in 6 + 4 = 10.
2. To understand why the median is the optimal answer, let us look at the far extremes.
3. It is obvious that the meeting point should be in between the extremes. Let us choose a random X.
    - This results in a sum of (X-0) + (10-X) = 10.
    - This shows that the extremes will need to travel over the distance between them, regardless of X.
4. This is true for pairs (0,N-1), (1,N-2), (2,N-3), etc UNTIL we reach the middle elements.
5. Now, we can see that it is optimal to choose this element. In the case of 2 middle elements, we can choose either one.

```c++
int solve(vi &A) {
  int N = A.size();
  sort(A.begin(), A.end());
  return A[N/2];
}
```

<hr />

### Longest subarray/subsegment

#### Case 1 (Increasing Subarray)

> You are given an array, which is a permutation of integers from 1 to N. In an action, you are able to move an element to the front/end of the array. What is the minimum number of actions to transform it into a sorted array? (http://codeforces.com/problemset/problem/605/A)

Approach:
1. There will only be a certain set of elements that we need to remove
2. If we know the elements we should remove, the untouched elements would be a continuous sequence a,a+1,a+2,a+3,....,a+k
    - Observe that the longer the sequence, the less elements we would need to move. So it is optimal to find the longest increasing subarray, as it will determine the answer.
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
