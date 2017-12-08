#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  string T = "hello";
  int pos = 0;

  for (int i=0;i<N;i++) {
    if (S[i] == T[pos]) pos++;
    if (pos == 5) break;
  }

  if (pos == 5) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
