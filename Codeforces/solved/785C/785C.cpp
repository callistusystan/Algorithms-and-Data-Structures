#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll N, M;

bool f(ll x) {
  return N - x*(x+1)/2 - M <= 0;
}

int main() {
  cin >> N >> M;
  if (M >= N) {
    cout << N << endl;
    return 0;
  }
  ll lo = -1, hi = 4e9;
  while (lo != hi-1) {
    ll mid = (lo + hi)/2;
    if (f(mid)) hi = mid;
    else lo = mid;
  }
  cout << M + hi << endl;
  return 0;
}
