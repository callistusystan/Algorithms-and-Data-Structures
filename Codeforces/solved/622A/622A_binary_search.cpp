#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;
  ll lo=0, hi=1e8;
  while (lo != hi-1) {
    ll mid = (lo+hi)/2;
    if (mid*(mid+1) >= 2*N) hi = mid;
    else lo = mid;
  }
  N -= (lo*(lo+1))/2;
  cout << N << endl;
  return 0;
}
