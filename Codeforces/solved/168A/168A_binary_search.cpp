#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, X, Y; cin >> N >> X >> Y;
  ll lo = -1, hi = 1e9;
  while (lo != hi-1) {
    ll mid = (lo+hi)/2;
    if ((X+mid)*100 >= Y*N) hi = mid;
    else lo = mid;
  }
  cout << hi << endl;
  return 0;
}
