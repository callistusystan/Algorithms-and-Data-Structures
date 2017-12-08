#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int G = A[0];
  for (int i=1;i<N;i++) {
    G = __gcd(G, A[i]);
  }

  cout << G * N << endl;

  return 0;
}
