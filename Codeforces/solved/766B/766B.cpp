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

  bool can = false;
  for (int i=1;i<N-1;i++) {
    if (A[i-1]+A[i] > A[i+1]) can = true;
  }

  if (can) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
