#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  int i = 0, ans = 0;
  while (i < N) {
    int j = i;
    while (j < N && j-i < 5 && S[j] == S[i]) j++;
    i = j;
    ans++;
  }
  cout << ans << endl;
  return 0;
}
