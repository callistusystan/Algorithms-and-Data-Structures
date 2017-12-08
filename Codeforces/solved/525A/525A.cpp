#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int n; cin >> n;
  string S; cin >> S;
  int N = S.size();

  map<char, int> keys;
  int ans = 0;

  for (int i=0;i<N;i++) {
    if (islower(S[i])) {
      keys[S[i]]++;
    } else if (keys[tolower(S[i])] > 0) {
      keys[tolower(S[i])]--;
    } else {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
