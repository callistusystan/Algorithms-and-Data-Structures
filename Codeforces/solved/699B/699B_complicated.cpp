#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  vector<pii> bombs;
  for (int i=0;i<N;i++)
    for (int j=0;j<M;j++)
      if (A[i][j] == '*')
        bombs.push_back({i,j});

  if ((int)bombs.size() >= N+M) cout << "NO\n";
  else {
    int K = bombs.size();
    for (int i=0;i<N;i++) {
      set<int> cols;
      for (int j=0;j<K;j++) {
        if (bombs[j].first != i)
          cols.insert(bombs[j].second);
      }
      if ((int)cols.size() <= 1) {
        cout << "YES\n";
        cout << i+1 << " " << (cols.size() ? *cols.begin()+1 : 1) << endl;
        return 0;
      }
    }
    cout << "NO\n";
  }
  return 0;
}
