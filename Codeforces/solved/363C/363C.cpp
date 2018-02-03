#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S, T; cin >> S;
  int N = S.size();
  for (int i=0;i<N;i++) {
    int M = T.size();
    bool can = 1;
    if (M >= 2 && T[M-1] == S[i] && T[M-2] == S[i]) can = 0;
    if (M >= 3 && T[M-1] == S[i] && T[M-2] == T[M-3]) can = 0;
    if (can) T += S[i];
  }
  cout << T << endl;
  return 0;
}
