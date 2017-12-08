#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, V; cin >> N >> V;
  vi ans;
  for (int i=0;i<N;i++) {
    int ki; cin >> ki;
    for (int j=0;j<ki;j++) {
      int sij; cin >> sij;
      if (V > sij && (ans.size() == 0 || ans.back()!=i+1)) {
        ans.push_back(i+1);
      }
    }
  }

  cout << ans.size() << endl;
  for (int i=0;i<(int)ans.size();i++) {
    if (i) cout << " ";
    cout << ans[i];
  }
  cout << endl;

  return 0;
}
