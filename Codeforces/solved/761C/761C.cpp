#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int BAD = 1e8;
string tokens = "#*&";

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  vi dDigit(N, BAD), dLower(N, BAD), dChar(N, BAD);
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (isdigit(A[i][j])) dDigit[i] = min(dDigit[i], min(M-j, j));
      else if (isalpha(A[i][j]) && islower(A[i][j]))
        dLower[i] = min(dLower[i], min(M-j, j));
      else if (tokens.find(A[i][j]) != string::npos) 
        dChar[i] = min(dChar[i], min(M-j, j));
    }
  }
  int ans = 1e9;
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      for (int k=0;k<N;k++) {
        if (i == j || i == k || j == k) continue;
        ans = min(ans, dDigit[i]+dLower[j]+dChar[k]);
      }
    }
  }
  cout << ans << endl;
  return 0;
}
