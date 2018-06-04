#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

pair<ll, ll> p(ll a, ll b) {
  return { min(a,b), max(a,b) };
}

set<ll> getAncestors(ll u) {
  set<ll> anc;
  while (u >= 1) { anc.insert(u); u /= 2; }
  return anc;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int Q; cin >> Q;
  map<pair<ll, ll>, ll> dist;
  while (Q--) {
    int t; cin >> t;
    if (t == 1) {
      ll u,v,w; cin >> u >> v >> w;
      set<ll> anc1 = getAncestors(u), anc2 = getAncestors(v);
      if (anc1.size() > anc2.size()) swap(anc1, anc2);
      for (auto rit = anc1.rbegin();rit != anc1.rend();rit++) {
        if (anc2.count(*rit)) {
          ll pu = u, pv = v;
          while (pu > *rit) { dist[p(pu, pu/2)] += w; pu /= 2; }
          while (pv > *rit) { dist[p(pv, pv/2)] += w; pv /= 2; }
          break;
        }
      }
    } else {
      ll u,v; cin >> u >> v;
      set<ll> anc1 = getAncestors(u), anc2 = getAncestors(v);
      if (anc1.size() > anc2.size()) swap(anc1, anc2);
      ll ans = 0;
      for (auto rit = anc1.rbegin();rit != anc1.rend();rit++) {
        if (anc2.count(*rit)) {
          ll pu = u, pv = v;
          while (pu > *rit) { ans += dist[p(pu, pu/2)]; pu /= 2; }
          while (pv > *rit) { ans += dist[p(pv, pv/2)]; pv /= 2; }
          break;
        }
      }
      cout << ans << endl;
    }
  }
  return 0;
}
