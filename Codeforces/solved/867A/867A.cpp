#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  int nSF, nFS;
  nSF = nFS = 0;
  for (int i=0;i<N-1;i++) {
    if (S.substr(i,2) == "SF") nSF++;
    else if (S.substr(i, 2) == "FS") nFS++;
  }
  if (nSF > nFS) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
