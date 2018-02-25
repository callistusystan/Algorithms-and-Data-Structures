#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  if (N > 36) cout << "-1\n";
  else {
    string ans(N/2, '8');
    if (N%2) ans += '4';
    cout << ans << endl;
  }
  return 0;
}
