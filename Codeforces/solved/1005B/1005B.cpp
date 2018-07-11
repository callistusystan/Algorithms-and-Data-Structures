#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S, T; cin >> S >> T;
  int N = S.size(), M = T.size();
  int i=N-1, j=M-1;
  while (i >= 0 && j >= 0 && S[i] == T[j]) {
    i--; j--;    
  }
  cout << N+M - (N-1-i) - (M-1-j) << endl;
  return 0;
}
