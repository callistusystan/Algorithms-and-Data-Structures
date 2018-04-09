#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi A(1e5+5), D(1e5+5);

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (i) D[i-1] = abs(A[i-1] - A[i]);
  }
  vector<ll> running(2), best(2);
  for (int i=0;i<N-1;i++) {
    if (i%2) {
      running[0] = max(0LL, running[0]-D[i]);
      running[1] = max(0LL, running[1]+D[i]);
    } else {
      running[0] = max(0LL, running[0]+D[i]);
      running[1] = max(0LL, running[1]-D[i]);
    }
    best[0] = max(best[0], running[0]);
    best[1] = max(best[1], running[1]);
  }
  cout << max(best[0], best[1]) << endl;
  return 0;
}
