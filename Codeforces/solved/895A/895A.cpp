#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
  }
  int ans = 360;
  for (int i=0;i<N;i++) {
    int sum = 0;
    for (int j=0;j<N;j++) {
      sum += A[(i+j)%N];
      ans = min(ans, abs(360-sum-sum));
    }
  }
  cout << ans << endl;
  return 0;
}
