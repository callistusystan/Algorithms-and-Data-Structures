#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<string> ans4 = {
  "1 + 2 = 3",
  "3 + 3 = 6",
  "4 * 6 = 24"
}, ans5 = {
  "1 + 2 = 3",
  "5 - 3 = 2",
  "2 * 3 = 6",
  "4 * 6 = 24"
};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  if (N <= 3) cout << "NO\n";
  else {
    cout << "YES\n";
    int start;
    if (N%2) {
      for (string s : ans5) cout << s << endl;
      start = 7;
    } else {
      for (string s : ans4) cout << s << endl;
      start = 6;
    }
    for (int i=start;i<=N;i+=2) {
      cout << i << " - " << i-1 << " = 1" << endl;
      cout << "24 * 1 = 24\n";
    }
  }
  return 0;
}
