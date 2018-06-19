#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool has(string &s, string t) {
  return s.find(t) != string::npos;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  if (has(S, "CC") || has(S, "YY") || has(S, "MM")) cout << "No\n";
  else {
    if (S[0] == '?' || S.back() == '?' || has(S, "??") || has(S, "C?C") || has(S, "Y?Y") || has(S, "M?M")) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}
