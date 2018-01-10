#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M; cin >> N >> M;
  int prev = -1;
  for (int i=0;i<N;i++) {
    string s; cin >> s;
    char cur = s[0];
    for (char c : s) {
      if (c == prev || c != cur) {
        cout << "NO\n";
        return 0;
      }
    }
    prev = cur;
  }
  cout << "YES\n";
  return 0;
}
