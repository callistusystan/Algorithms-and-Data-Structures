#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  int best = 1, cur = 1;
  for (int i=1;i<N;i++) {
    if (A[i] > A[i-1]) {
      cur++;
      best = max(best, cur);
    } else {
      cur = 1;
    }
  }

  cout << best << endl;

  return 0;
}
