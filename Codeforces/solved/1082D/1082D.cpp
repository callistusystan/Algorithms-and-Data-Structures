#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N), bamboo, leaves;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (A[i] >= 2) bamboo.push_back(i);
    else leaves.push_back(i);
  }
  if (N == 2) {
    cout << "YES 1\n1\n1 2\n";
    return 0;
  }
  if (bamboo.empty()) {
    cout << "NO\n";
    return 0;
  }
  vector<pii> ans;
  for (int i=0;i+1<(int)bamboo.size();i++) {
    int u = bamboo[i], v = bamboo[i+1];
    ans.push_back({u, v});
    A[u]--; A[v]--;
  }
  int M = leaves.size();
  if (M >= 1) {
    ans.push_back({ leaves[0], bamboo[0] });
    A[bamboo[0]]--;
  }
  if (M >= 2) {
    ans.push_back({ leaves[1], bamboo.back() });
    A[bamboo.back()]--;
  }
  int j = 0;
  for (int i=2;i<M;i++) {
    while (j < (int)bamboo.size() && A[bamboo[j]] == 0) j++;
    if (j == (int)bamboo.size()) {
      cout << "NO\n";
      return 0;
    }
    ans.push_back({ leaves[i], bamboo[j] });
    A[bamboo[j]]--;
  }
  cout << "YES " << bamboo.size()-1 + min(2, M) << endl;
  cout << ans.size() << endl;
  for (auto p : ans) cout << p.first+1 << " " << p.second+1 << endl;
  return 0;
}
