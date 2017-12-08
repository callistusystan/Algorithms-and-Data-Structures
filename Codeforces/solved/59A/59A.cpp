#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  int nUp, nLo;
  nUp = nLo = 0;

  for (char c: S) {
    if (islower(c)) nLo++;
    else nUp++;
  }

  if (nLo >= nUp) {
    for (int i=0;i<N;i++) S[i] = tolower(S[i]);
  } else {
    for (int i=0;i<N;i++) S[i] = toupper(S[i]);
  }

  cout << S << endl;

  return 0;
}
