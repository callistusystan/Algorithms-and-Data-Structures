#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll S, N; cin >> S >> N;

  vector<pair<ll, ll>> X(N);
  for (int i=0;i<N;i++) {
    cin >> X[i].first >> X[i].second;
  }

  sort(X.begin(), X.end());

  bool can = true;
  for (int i=0;i<N;i++) {
    if (S > X[i].first) {
      S += X[i].second;
    } else {
      can = false;
      break;
    }
  }

  if (can) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
