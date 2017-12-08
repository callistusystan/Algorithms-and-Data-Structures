#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;

  int nD,nA; nD=nA=0;
  for (int i=0;i<N;i++) {
    if (S[i] == 'A') nA++;
    else nD++;
  }

  if (nD > nA) cout << "Danik";
  else if (nD == nA) cout << "Friendship";
  else cout << "Anton";
  cout << endl;

  return 0;
}
