#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string A,B; cin >> A >> B;
  int N = A.size();
  for (int i=0;i<N;i++) {
    A[i] = tolower(A[i]);
    B[i] = tolower(B[i]);
  }

  if (A < B) cout << -1;
  else if (A == B) cout << 0;
  else cout << 1;
  cout << endl;

  return 0;
}
