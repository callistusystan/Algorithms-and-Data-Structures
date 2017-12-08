#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> A(N), B(N);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++) cin >> B[i];

  ll f1, f2;
  f1 = f2 = 0;
  for (int i=0;i<N;i++) {
    f1 |= A[i];
    f2 |= B[i];
  }
  cout << f1+f2 << endl;

  return 0;
}
