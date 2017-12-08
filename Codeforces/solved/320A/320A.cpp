#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  bool can = true;
  for (int i=0;i<N;i++) {
    if (N-i >= 3) {
      if (S.substr(i,3) == "144") {
        i+=2;
      } else if (S.substr(i,2) == "14") {
        i++;
      } else if (S[i] != '1') can = false;
    } else if (N-i >= 2) {
      if (S.substr(i,2) == "14") {
        i++;
      } else if (S[i] != '1') can = false;
    } else if (S[i] != '1') can = false;
  }

  if (can) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
