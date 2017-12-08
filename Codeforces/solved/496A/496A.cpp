#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  int best = 10000, bestI;
  for (int i=1;i<N-1;i++) {
    if (A[i+1]-A[i-1] < best) {
      best = A[i+1]-A[i-1];
      bestI = i;
    }
  }

  int diff = 0;
  for (int i=0;i<N-1;i++) {
    if (i == bestI) continue;
    if (i+1 == bestI) {
      diff = max(diff, A[i+2]-A[i]);
    } else {
      diff = max(diff, A[i+1]-A[i]);
    }
  }

  cout << diff << endl;

  return 0;
}
