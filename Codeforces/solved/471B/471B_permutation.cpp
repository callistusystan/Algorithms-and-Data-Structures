#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<int, vi> M;
  for (int i=1;i<=N;i++) {
    int ai; cin >> ai;
    M[ai].push_back(i);
  }
  ll pos = 1;
  vi A;
  for (auto p : M) {
    pos *= p.second.size();
    if (p.second.size() > 1) A.push_back(p.first);
    if (pos >= 3) break;
  }
  if (pos >= 3) {
    cout << "YES\n";
    for (auto p : M) {
      for (int ai : p.second) cout << ai << " ";
    }
    cout << endl;
    int cnt = 1, cur = 0;
    while (cur < (int)A.size() && cnt < 3) {
      while (next_permutation(M[A[cur]].begin(), M[A[cur]].end()) && cnt < 3) {
        for (auto p : M) {
          for (int ai : p.second) cout << ai << " ";
        }
        cout << endl;
        cnt++;
      }
      cur++;
    }
  } else cout << "NO\n";
  return 0;
}
