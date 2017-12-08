#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi freq(1000);
  string S; cin >> S;
  int N = S.size();

  for (int i=0;i<N;i++) {
    freq[S[i]]++;
  }

  string T = "Bulbasaur";
  int ans = 1e5+5;
  for (char c : T) {
    if (c == 'a' || c == 'u') {
      ans = min(ans, freq[c]/2);
    } else {
      ans = min(ans, freq[c]);
    }
  }

  cout << ans << endl;

  return 0;
}
