#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<string> bus(N);
  for (int i=0;i<N;i++) cin >> bus[i];

  bool can = false;
  for (int i=0;i<N;i++) {
    if (bus[i].substr(0,2) == "OO") {
      bus[i][0] = '+'; bus[i][1] = '+';
      can = true;
      break;
    } else if (bus[i].substr(3,2) == "OO") {
      bus[i][3] = '+'; bus[i][4] = '+';
      can = true;
      break;
    }
  }

  if (can) {
    cout << "YES" << endl;
    for (string S: bus) cout << S << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
