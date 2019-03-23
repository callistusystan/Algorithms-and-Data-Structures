#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool check(string t) {
  sort(t.begin(), t.end());
  return t[0] == t[1] && t[2] == t[3];
}

int f(char a, char b, char c, char d) {
  string s; s = s + a + b + c + d;
  string t = s;
  // try 0
  if (check(t)) return 0;
  // try 1
  for (char x : s) {
    t[0] = x;
    if (check(t)) return 1;
  }
  t = s;
  for (char x : s) {
    t[1] = x;
    if (check(t)) return 1;
  }
  return 2;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S, T; cin >> S >> T;
  int ans = 0;
  for (int i=0;i<N/2;i++) ans += f(S[i], S[N-1-i], T[i], T[N-1-i]);
  if (N%2 && S[N/2] != T[N/2]) ans++;
  cout << ans << endl;
  return 0;
}
