#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  vector<pii> ans;
  for (int i=0;i<N;i++) {
    int j = min_element(A.begin()+i, A.end()) - A.begin();
    if (i != j) {
      ans.push_back({i,j});
      swap(A[i], A[j]);
    }
  }
  cout << ans.size() << endl;
  for (pii p : ans) cout << p.first << " " << p.second << endl;
  return 0;
}
