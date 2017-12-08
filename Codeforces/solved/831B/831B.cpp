#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S,T; cin >> S >> T;
  string A; cin >> A;
  int N = A.size();

  for (int i=0;i<N;i++) {
    if (isalpha(A[i])) {
      char c = T[S.find(tolower(A[i]))];
      if (isupper(A[i])) cout << (char)toupper(c);
      else cout << (char)tolower(c);
    } else cout << (char)A[i];
  }
  cout << endl;

  return 0;
}
