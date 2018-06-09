#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S, T; cin >> S >> T;
  int N = S.size();
  map<char, char> M;
  for (int i=0;i<N;i++) {
    if (!M.count(S[i])) M[S[i]] = T[i];
    if (!M.count(T[i])) M[T[i]] = S[i];
    if (M[S[i]] == T[i] && M[T[i]] == S[i]) continue;
    cout << "-1\n";
    return 0;
  }
  vector<pair<char,char>> ans;
  for (char c='a';c<='z';c++) {
    if (!M.count(c) || M[c] == c) continue;
    ans.push_back({ c, M[c] });
    M.erase(M[c]);
    M.erase(c);
  }
  cout << ans.size() << endl;
  for (auto p : ans) cout << p.first << " " << p.second << endl;
  return 0;
}
