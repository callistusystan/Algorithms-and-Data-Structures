#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M,K; cin >> N >> M >> K;
  vector<pii> R(N), C(M);
  fill(R.begin(), R.end(), make_pair(0,0));
  fill(C.begin(), C.end(), make_pair(0,0));
  for (int i=1;i<=K;i++) {
    int t,ai,bi; cin >> t >> ai >> bi;
    if (t == 1) R[ai-1] = {bi, i};
    else C[ai-1] = {bi, i};
  }
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (R[i].second > C[j].second) cout << R[i].first << " ";
      else cout << C[j].first << " ";
    }
    cout << endl;
  }
  return 0;
}
