#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vi psum(N);
  for (int i=0;i<N;i++) {
    cin >> psum[i];
    if (i) psum[i] += psum[i-1];
  }
  double ans = 0;
  for (int k=K;k<=N;k++) {
    for (int i=0;i+k-1<N;i++)
      ans = max(
        ans, 
        ((double)psum[i+k-1] - (i ? psum[i-1] : 0))/k
      );
  }
  cout << fixed << setprecision(12) << ans << endl; 
  return 0;
}
