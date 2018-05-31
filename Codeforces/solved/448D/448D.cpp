#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll N, M, K; 

bool f(ll x) {
  ll res = 0;
  for (ll i=1;i<=N;i++) res += min(M, x/i);
  return res < K;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M >> K;
  ll lo = 0, hi = N*M;
  while (lo != hi-1) {
    ll mid = (lo + hi)/2;
    if (f(mid)) lo = mid;
    else hi = mid;
  }
  cout << hi << endl;  
  return 0;
}
