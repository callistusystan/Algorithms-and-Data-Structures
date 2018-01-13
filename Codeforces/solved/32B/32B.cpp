#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  int i = 0;
  while (i < N) {
    if (S[i] == '.') {
      cout << 0; i++;
    } else if (S.substr(i,2) == "-.") {
      cout << 1; i += 2;
    } else if (S.substr(i,2) == "--") {
      cout << 2; i += 2;
    }
  }
  cout << endl;
  return 0;
}
