#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<ll, ll> diag1, diag2;
  for (int i=0;i<N;i++) {
    int xi, yi; cin >> xi >> yi;
    diag1[xi+yi]++;
    diag2[xi-yi]++;
  }
  ll ans = 0;
  for (auto p : diag1) {
    ans += (p.second*(p.second-1))/2;
  }
  for (auto p : diag2) {
    ans += (p.second*(p.second-1))/2;
  }
  cout << ans << endl;
  return 0;
}
