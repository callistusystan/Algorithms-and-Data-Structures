#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi X(N), V(N);
  for (int i=0;i<N;i++) cin >> X[i];
  for (int i=0;i<N;i++) cin >> V[i];
  double lo = 0, hi = 1e16;
  for (int it=0;it<500;it++) {
    double mid = (lo+hi)/2;
    double l = 0, r = 1e9;
    for (int i=0;i<N;i++) {
      l = max(l, X[i] - mid*V[i]);
      r = min(r, X[i] + mid*V[i]);
    }
    if (l < r) hi = mid;
    else lo = mid;
  }
  cout << fixed << setprecision(12) << hi << endl;
  return 0;
}
