#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  vector<bool> H(N+1), V(N+1);
  vi ans;
  for (int i=1;i<=N*N;i++) {
    int hi,vi; cin >> hi >> vi;
    if (!H[hi] && !V[vi]) {
      H[hi] = 1; V[vi] = 1;
      ans.push_back(i);
    }
  }

  for (int i=0;i<(int)ans.size();i++) {
    cout << ans[i] << " ";
  }
  cout << endl;

  return 0;
}
