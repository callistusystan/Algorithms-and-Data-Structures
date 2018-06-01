#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int MOD = 1e6+3;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  ll ans = 0;
  for (int i=0;i<N;i++) {
    if (S[i] == '>') ans = ans*16 + 8;
    else if (S[i] == '<') ans = ans*16 + 9;
    else if (S[i] == '+') ans = ans*16 + 10;
    else if (S[i] == '-') ans = ans*16 + 11;
    else if (S[i] == '.') ans = ans*16 + 12;
    else if (S[i] == ',') ans = ans*16 + 13;
    else if (S[i] == '[') ans = ans*16 + 14;
    else ans = ans*16 + 15;
    ans %= MOD;
  }
  cout << ans << endl;
  return 0;
}
