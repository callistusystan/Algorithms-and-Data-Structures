#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K; cin >> N >> K;
  vector<map<int, ll>> A(3);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (ai%(K*K) == 0 && A[0].count(ai/(K*K)) && A[1].count(ai/K)) A[2][ai] += A[1][ai/K];
    if (ai%K == 0 && A[0].count(ai/K)) A[1][ai] += A[0][ai/K];
    A[0][ai]++;
  }
  ll ans = 0;
  for (auto p : A[2]) ans += p.second;
  cout << ans << endl;
  return 0;
}
