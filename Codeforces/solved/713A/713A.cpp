#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  map<string, int> count;
  while (T--) {
    char c; string S;
    cin >> c >> S;
    string pat(18, '0');
    for (int i=0;i<(int)S.size();i++) {
      int d = S[S.size()-1 - i] - '0';
      pat[17-i] = (d%2 ? '1': '0');
    }
    if (c == '+') count[pat]++;
    else if (c == '-') count[pat]--;
    else cout << count[pat] << endl;
  }
  return 0;
}
