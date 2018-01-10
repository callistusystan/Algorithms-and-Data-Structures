#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  int mx = 0; ll sum = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    mx = max(mx, A[i]);
    sum += A[i];
  }
  ll lo = -1, hi = 2e9+5;
  while (lo != hi-1) {
    ll mid = (lo+hi)/2;
    if (mid < mx) {
      lo = mid;
      continue;
    }
    ll spec = N*mid - sum;
    if (spec >= mid) hi = mid;
    else lo = mid;
  }
  cout << hi << endl;
  return 0;
}
