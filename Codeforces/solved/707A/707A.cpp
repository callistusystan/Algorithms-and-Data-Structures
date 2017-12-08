#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;

  bool BW = true;
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      char c; cin >> c;
      if (c == 'C' || c == 'M' || c == 'Y') BW = false;
    }
  }

  if (BW) cout << "#Black&White";
  else cout << "#Color";
  cout << endl;

  return 0;
}
