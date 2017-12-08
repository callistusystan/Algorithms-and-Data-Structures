#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string A,B; cin >> A >> B;
  int N = A.size();
  string C(N, '.');
  for (int i=0;i<N;i++) {
    if (A[i] < B[i]) {
      cout << -1 << endl;
      return 0;
    }
    C[i] = min(A[i],B[i]);
  }
  cout << C << endl;
  return 0;
}
