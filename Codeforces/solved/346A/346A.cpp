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
  int g = A[0];
  for (int i=1;i<N;i++) g = __gcd(g, A[i]);
  int mx = *max_element(A.begin(), A.end());
  int rounds = mx/g-N;
  if (rounds%2) cout << "Alice\n";
  else cout << "Bob\n";
  return 0;
}
