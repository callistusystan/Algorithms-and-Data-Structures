#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N+1);
  for (int i=1;i<=N;i++) cin >> A[i];

  int E = 0, ans = 0;
  for (int i=0;i<N;i++) {
    if (E+A[i]-A[i+1] < 0) {
      int x = A[i+1]-E;
      ans += x-A[i];
      A[i] = x;
    }
    E += A[i]-A[i+1];
  }

  cout << ans << endl;

  return 0;
}
