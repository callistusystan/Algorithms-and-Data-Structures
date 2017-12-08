#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  char cur = S[0];
  int cnt = 1;
  bool dangerous = false;
  for (int i=1;i<N;i++) {
    if (S[i] == cur) {
      cnt++;
    } else {
      cur = S[i];
      cnt = 1;
    }

    if (cnt == 7) {
      dangerous = true;
      break;
    }
  }

  if (dangerous) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
