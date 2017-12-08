#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> diag1(3000), diag2(3000);
  for (int i=0;i<N;i++) {
    int xi, yi; cin >> xi >> yi;
    diag1[xi+yi]++;
    diag2[xi-yi+1000]++;
  }
  ll ans = 0;
  for (ll i : diag1) {
    ans += (i*(i-1))/2;
  }
  for (ll i : diag2) {
    ans += (i*(i-1))/2;
  }
  cout << ans << endl;
  return 0;
}
