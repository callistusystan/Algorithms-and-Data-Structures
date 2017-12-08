#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vi A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (i) A[i] += A[i-1];
  }

  int best, minI;
  minI = 0;
  best = A[K-1];
  for (int i=0;i<N-K+1;i++) {
    int cur = A[i+K-1] - (i==0 ? 0 : A[i-1]);
    if (cur < best) {
      best = cur;
      minI = i;
    }
  }

  cout << minI + 1 << endl;

  return 0;
}
