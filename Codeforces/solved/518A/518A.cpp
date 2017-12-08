#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S, T; cin >> S >> T;
  int N = S.size();
  string U = S;
  for (int i=N-1;i>=0;i--) {
    U[i]++;
    if (U[i]-'a' < 26) break;
    else U[i] = 'a';
  }
  if (U < T) cout << U;
  else cout << "No such string";
  cout << endl;
  return 0;
}
