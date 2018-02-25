#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<ll> memo1(1e7+5, -1);

ll f(ll i) {
  if (i == 1) return 0;
  else if (i < 1e7+5 && memo1[i] != -1) return memo1[i];
  ll ans;
  if (i%2) ans = 1+f(3*i+1);
  else ans = 1+f(i/2);
  if (i < 1e7+5) return memo1[i] = ans;
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=1;i<=5e6;i++) f(i);
  vector<ll> best(5e6+5);
  best[1] = 3;
  for (int i=2;i<=5e6;i++) {
    if (memo1[i] >= memo1[best[i-1]]) best[i] = i;
    else best[i] = best[i-1];
  }

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    cout << best[N] << endl;
  }
  return 0;
}
