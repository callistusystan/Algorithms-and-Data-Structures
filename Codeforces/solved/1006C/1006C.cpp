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
  ll pSum = 0, sSum = 0, ans = 0;
  int l = 0, r = N-1;
  while (l-1 < r+1) {
    if (pSum == sSum) {
      ans = pSum;
      pSum += A[l++];
      sSum += A[r--];
    } else if (pSum < sSum) pSum += A[l++];
    else if (pSum > sSum) sSum += A[r--];
  }
  cout << ans << endl;
  return 0;
}
