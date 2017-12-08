#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int nOfficers = 0, ans = 0;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (ai > 0) nOfficers += ai;
    else {
      if (nOfficers > 0) nOfficers--;
      else ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
