#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<int, ll> X, Y;
  map<pii, ll> A;
  for (int i=0;i<N;i++) {
    int xi, yi; cin >> xi >> yi;
    A[make_pair(xi, yi)]++;
    X[xi]++;
    Y[yi]++;
  }
  ll ans = 0;
  for (auto p : X) {
    ans += (p.second*(p.second-1))/2;
  }
  for (auto p : Y) {
    ans += (p.second*(p.second-1))/2;
  }
  for (auto p: A) {
    ans -= (p.second*(p.second-1))/2;
  }
  cout << ans << endl;
  return 0;
}
