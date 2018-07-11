#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<string, int> cntA, cntB;
  for (int i=0;i<N;i++) {
    string ai; cin >> ai;
    cntA[ai]++;
  }
  for (int i=0;i<N;i++) {
    string bi; cin >> bi;
    cntB[bi]++;
  }
  int ans = 0;
  for (auto p : cntA) {
    string s = p.first;
    if (cntA[s] > cntB[s]) ans += cntA[s] - cntB[s];
  }
  cout << ans << endl;
  return 0;
}
