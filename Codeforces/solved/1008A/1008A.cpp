#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string vowel = "aeiou";

bool is_vowel(char c) {
  return vowel.find(c) != string::npos;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  bool can = is_vowel(S.back()) || S.back() == 'n';
  for (int i=1;i<N;i++) {
    if (S[i-1] == 'n' || is_vowel(S[i-1])) continue;
    if (!is_vowel(S[i])) can = false;
  }
  if (can) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
