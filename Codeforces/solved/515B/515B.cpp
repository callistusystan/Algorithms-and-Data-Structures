#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi B(N), G(M);
  int b; cin >> b;
  while (b--) {
    int ai; cin >> ai;
    B[ai] = 1;
  }
  int g; cin >> g;
  while (g--) {
    int ai; cin >> ai;
    G[ai] = 1;
  }
  int GCD = __gcd(N,M);
  vi hasHappy(GCD);
  for (int i=0;i<N;i++) hasHappy[i%GCD] |= B[i];
  for (int i=0;i<M;i++) hasHappy[i%GCD] |= G[i];
  bool can = true;
  for (int i=0;i<GCD;i++)
    if (!hasHappy[i])
      can = false;
  if (can) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}
