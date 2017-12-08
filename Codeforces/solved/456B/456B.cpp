#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  if (N == 1) {
    N++;
    S = "0" + S;
  }

  int D = stoi(S.substr(N-2));
  if (D%4 == 0) cout << 4;
  else cout << 0;
  cout << endl;

  return 0;
}
