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
  ll ans = 0, sum = 0;
  map<ll, int> sSum;
  for (int i=N-1;i>=0;i--) {
    sum += A[i];    
    sSum[sum] = i;
  }
  sum = 0;
  for (int i=0;i<N;i++) {
    sum += A[i];
    if (sSum.count(sum) && sSum[sum] > i) ans = sum;
  }
  cout << ans << endl;
  return 0;
}
