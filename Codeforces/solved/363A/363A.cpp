#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  reverse(S.begin(), S.end());
  for (char c : S) {
    int cur = c - '0';
    if (cur < 5) cout << "O-|";
    else cout << "-O|";
    cur %= 5;
    for (int i=0;i<cur;i++) cout << 'O';
    cout << '-';
    for (int i=0;i<4-cur;i++) cout << 'O';
    cout << endl;
  }
  return 0;
}
