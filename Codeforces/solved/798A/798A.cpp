#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  int nDiff = 0;
  for (int i=0;i<N/2;i++) {
    if (S[i] != S[N-1-i]) nDiff++;
  }

  if (nDiff == 1) cout << "YES";
  else if (nDiff == 0 && N%2) cout << "YES";
  else cout << "NO"; 
  cout << endl;

  return 0;
}
