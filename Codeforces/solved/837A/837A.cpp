#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string word;
  int ans = 0;
  while (cin >> word) {
    int cnt = 0;
    for (char c : word)
      if (isupper(c)) cnt++;
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}
