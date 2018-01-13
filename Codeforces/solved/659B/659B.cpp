#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M; cin >> N >> M;
  vector<vector<pair<int, string>>> regions(M);
  for (int i=0;i<N;i++) {
    string s; int r, ai; cin >> s >> r >> ai;
    r--;
    regions[r].push_back({ ai, s });
  }
  for (int i=0;i<M;i++) {
    sort(regions[i].begin(), regions[i].end());
    int si = regions[i].size();
    if (si == 2 || regions[i][si-2].first > regions[i][si-3].first)
      cout << regions[i][si-1].second << " " << regions[i][si-2].second << endl;
    else cout << "?\n";
  }
  return 0;
}
