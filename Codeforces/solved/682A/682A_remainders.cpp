#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,M; cin >> N >> M;

  vi c1(5), c2(5);

  for (int i=1;i<=N;i++) c1[i%5]++;
  for (int i=1;i<=M;i++) c2[i%5]++;

  ll ans = c1[0]*c2[0] + c1[1]*c2[4] + c1[2]*c2[3] + c1[3]*c2[2] + c1[4]*c2[1];

  cout << ans << endl;
  return 0;
}
