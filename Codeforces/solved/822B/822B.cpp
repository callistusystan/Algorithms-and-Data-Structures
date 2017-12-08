#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  string S, T; cin >> S >> T;

  vi ans;
  for (int i=1;i<=N;i++) ans.push_back(i);

  for (int i=0;i+N-1<M;i++) {
    vi cur;
    for (int j=0;j<N;j++) {
      if (S[j] != T[i+j]) {
        cur.push_back(j+1);
      }
    }
    if (cur.size() < ans.size()) {
      ans = cur;
    }
  }
  cout << ans.size() << endl;
  for (int i=0;i<(int)ans.size();i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}
