#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int W, H, N; cin >> W >> H>> N;
  set<pii> hor, ver;
  hor.insert({ 0, W }); ver.insert({ 0, H });
  priority_queue<pair<int, pii>> pqh, pqv;
  pqh.push({ W, { 0, W } }); pqv.push({ H, { 0, H } });
  while (N--) {
    char c; int x; cin >> c >> x;
    if (c == 'H') {
      auto it = ver.upper_bound({ x, 0 }); it--;
      pii p = *it;
      ver.erase(it);
      ver.insert({ p.first, x }); ver.insert({ x, p.second });
      pqv.push({ x-p.first, { p.first, x } });
      pqv.push({ p.second-x, { x, p.second } });
    } else {
      auto it = hor.upper_bound({ x, 0 }); it--;
      pii p = *it;
      hor.erase(it);
      hor.insert({ p.first , x }); hor.insert({ x, p.second });
      pqh.push({ x-p.first, { p.first, x } });
      pqh.push({ p.second-x, { x, p.second } });
    }
    while (!hor.count(pqh.top().second)) pqh.pop();
    while (!ver.count(pqv.top().second)) pqv.pop();
    ll w = pqh.top().first, h = pqv.top().first;
    cout << w*h << endl;
  }
  return 0;
}
