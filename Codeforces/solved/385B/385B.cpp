#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  vi bears;
  for (int i=0;i+4-1<N;i++) {
    if (S.substr(i,4) == "bear") bears.push_back(i);
  }
  int ans = 0;
  for (int i=0;i<N;i++) {
    auto it = lower_bound(bears.begin(), bears.end(), i);
    if (it != bears.end()) {
      ans += N-((*it) + 3);
    }
  }
  cout << ans << endl;
  return 0;
}
