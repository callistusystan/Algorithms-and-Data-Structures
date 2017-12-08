#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());

  ll t = A[0]; int ans = 0;
  for (int i=1;i<N;i++) {
    if (t > A[i]) ans++;
    else {
      t += A[i];
    }
  }

  cout << N-ans << endl;

  return 0;
}
