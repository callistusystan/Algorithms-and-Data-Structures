#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi ans;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (ai == 1) ans.push_back(1);
    else ans[ans.size()-1]++;
  }
  int sz = ans.size();
  cout << sz << endl;
  for (int i=0;i<sz;i++) cout << ans[i] << " ";
  cout << endl;
  return 0;
}