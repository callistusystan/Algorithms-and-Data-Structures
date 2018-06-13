#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<int, int> A, B;
  for (int i=0;i<N;i++) {
    int ai, xi; cin >> ai >> xi;
    A[ai] = xi;
  }
  int M; cin >> M;
  for (int i=0;i<M;i++) {
    int bi, yi; cin >> bi >> yi;
    B[bi] = yi;
  }
  ll ans = 0;
  for (auto p : A) {
    if (B.count(p.first)) ans += max(p.second, B[p.first]);
    else ans += p.second;
  }
  for (auto p : B) if (!A.count(p.first)) ans += p.second;
  cout << ans << endl;
  return 0;
}
