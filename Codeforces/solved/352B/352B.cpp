#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<int, vi> A;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    A[ai].push_back(i);
  }
  vi ans;
  for (auto p : A) {
    int x = p.first;
    vi pos = p.second;
    if (pos.size() == 1) {
      A[x].push_back(pos[0]);
      ans.push_back(x);
    } else {
      bool ok = true;
      for (int i=0;i+1<(int)pos.size();i++) {
        if (pos[i+1]-pos[i] != pos[1]-pos[0]) ok = false;
      }
      if (ok) ans.push_back(x);
    }
  }
  cout << ans.size() << endl;
  for (int i : ans) {
    cout << i << " " << A[i][1]-A[i][0] << endl;
  }
  return 0;
}
