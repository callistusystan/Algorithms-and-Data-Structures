# Binary Search

## Introduction

We all know that Binary Search is an efficient divide-and-conquer algorithm to search for an item in a sorted array.

Time Complexity: O(log N), _where N is the number of items in the array_

### Basic Implementation
```c++
bool binary_search(vector<int> A, int target) {
  int lo = 0;
  int hi = A.size()-1;
  while (lo != hi) {
    mid = (lo+hi)/2
    if (A[mid] == target) return true;
    else if (target < A[mid]) {
      hi = mid -1;
      } else {
        lo = mid + 1;
      }
    }
    return A[lo] == target;
}
```

## Extensions
Besides searching for an item in an array, we can easily modify the above algorithm to search for:-

**1. Lower Bound**

  The index of the first item in the list greater than or equal to the target value.
  ```c++
  /*
   * Let us use the invariants, A[lo] <  target and
   *                            A[hi] >= target
   * By following this, we will return hi when we exit the loop
   */
  int lower_bound(vector<int> A, int target) {  
    int lo = -1;
    int hi = A.size()+1;
    while (lo != hi-1) {
      mid = (lo+hi)/2
      if (A[mid] >= target) hi = mid;
      else lo = mid;
      }
      return hi;
  }
  ```
**2. Upper Bound**

  The index of the first item in the list greater than the target value.
  ```c++
  /*
   * Let us use the invariants, A[lo] <= target and
   *                            A[hi] >  target
   * By following this, we will return hi when we exit the loop
   */
  int upper_bound(vector<int> A, int target) {
    int lo = -1;
    int hi = A.size()+1;
    while (lo != hi-1) {
      mid = (lo+hi)/2
      if (A[mid] > target) hi = mid;
      else lo = mid;
      }
      return hi;
  }
  ```

## That is not all that Binary Search can do!

The concept of Binary Search is to approach the turning point of a predicate. That is, the value that causes some predicate to change from false to true or vice versa.

For instance, notice that in **Lower bound** and **Upper bound**,
  - Predicate: A[i] < target
  - Notice that:
    - i in 0..lo is **false**
    - i in hi..N is **true**

Once we understand this, we can actually apply Binary Search to many other predicates as well!

## Other applications of Binary Search

#### 1. Square Root of X
```c++
/*
 * Let us use the invariants, lo*lo <  X and
 *                            hi*hi >= X
 * By following this, we will return hi when we exit the loop
 */
double square_root(double X) {
  double EPS = 1e-9;
  double lo = 0;
  double hi = X;
  while (hi - lo > EPS) {
    mid = (lo + hi)/2;
    if (mid*mid < X) lo = mid;
    else hi = mid;
  }
  return hi;
}
```

#### 2. Bipartite Matching (Minimax edge in a Perfect Matching)

```
Given a bipartite graph, with weighted edges, find the minimum maximum edge weight in a perfect matching.
```

At first glance, this seems like it has nothing to do with Binary Search, however...

By being creative, we can change the question into:
```
Can we find a perfect matching by using weights <= W?
```

Using this strategy, we can simply remove all weights > W and perform our network flow algorithm!

## Conclusion

Binary Search is an extremely powerful technique, that divides the search interval in half each time.

Due to its nature of a approaching a **turning point** in some predicate function, Binary Search is extremely effective for answering questions involving **maximizing** or **minimizing** something.

Questions to ask to see if Binary Search could solve a problem:
1. Could I turn the question into some predicate function, where there is a turning point between true or false?
