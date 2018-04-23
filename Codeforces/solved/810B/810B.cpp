#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, F; cin >> N >> F;
  priority_queue<ll> pq;
  ll ans = 0;
  for (int i=0;i<N;i++) {
    ll ki, li; cin >> ki >> li;
    ll sell = min(ki, li);
    ans += sell;
    pq.push(min(2*ki, li) - sell);
  }
  while (F--) {
    ll profit = pq.top(); pq.pop();
    if (profit > 0) ans += profit;
  }
  cout << ans << endl;
  return 0;
}
