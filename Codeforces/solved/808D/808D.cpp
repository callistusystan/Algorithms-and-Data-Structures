#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> A(N), P(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    P[i] = A[i];
    if (i) P[i] += P[i-1];
  }

  if (P[N-1]%2) {
    cout << "NO" << endl;
    return 0;
  } else {
    int x,y;
    y = min((int)N-1, (int)(lower_bound(P.begin(), P.end(), P[N-1]/2) - P.begin()));
    x = max(0,y-1);
    if (P[x] == P[N-1]/2) {
      cout << "YES" << endl;
      return 0;
    } else {
      // see if can swap 0..i
      set<int> left, right;
      for (int i=0;i<=x;i++) {
        left.insert(A[i]);
      }
      for (int i=y;i<N;i++) {
        right.insert(A[i]);
      }
      for (int num : left) {
        if (right.count(P[N-1]/2-(P[x]-num))) {
          cout << "YES" << endl;
          return 0;
        }
      }
      left.insert(A[y]);
      right.clear();
      for (int i=y+1;i<N;i++) {
        right.insert(A[i]);
      }
      // see if can swap 0..j
      for (int num : left) {
        if (right.count(P[N-1]/2-(P[y]-num))) {
          cout << "YES" << endl;
          return 0;
        }
      }
    }
  }
  cout << "NO" << endl;

  return 0;
}
