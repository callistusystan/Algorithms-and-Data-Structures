#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<vi> visited(305, vi(305));

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M,K; cin >> N >> M >> K;
  vector<pii> ans;
  for (int i=1;i<=N;i++) {
    if (i%2) {
      for (int j=1;j<=M;j++) ans.push_back({i,j});
    } else {
      for (int j=M;j>=1;j--) ans.push_back({i,j});
    }
  }
  for (int i=0;i<K-1;i++) {
    cout << "2 " << ans[2*i].first << " " << ans[2*i].second << " " << ans[2*i+1].first << " " << ans[2*i+1].second << endl;
  }
  cout << N*M-2*(K-1);
  for (int i=2*(K-1);i<N*M;i++) cout << " " << ans[i].first << " " << ans[i].second;
  cout << endl;
  return 0;
}
