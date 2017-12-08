#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, M; cin >> N >> M;

  set<ll> A;
  for (int i=0;i<N;i++) {
    ll ai; cin >> ai;
    A.insert(ai);
  }

  int i = 1;
  vi ans;
  while (M >= i) {
    if (!A.count(i)) {
      ans.push_back(i);
      M -= i;
    }
    i++;
  }

  cout << ans.size() << endl;
  for (int i=0;i<(int)ans.size();i++) {
    cout << ans[i] << " ";
  }
  cout << endl;

  return 0;
}
