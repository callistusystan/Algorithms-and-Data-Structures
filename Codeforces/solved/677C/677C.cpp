#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

map<char, int> M;
int MOD = 1e9+7;

int toInt(char c) {
  if (c == '-') return 62;
  else if (c == '_') return 63;
  else if (isalpha(c)) {
    if (islower(c)) return c - 'a' + 36;
    return c - 'A' + 10;
  }
  return c-'0';
}

int countZeroes(char c) {
  if (M.count(c)) return M[c];
  int x = toInt(c);
  int ans = 0;
  for (int i=0;i<6;i++)  {
    ans += x%2==0;
    x >>= 1;
  }
  return M[c] = ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  int n0 = 0;
  for (int i=0;i<N;i++) n0 += countZeroes(S[i]);
  int pos = 1;
  for (int i=0;i<n0;i++) pos = ((ll)pos*3)%MOD;
  cout << pos << endl;
  return 0;
}
