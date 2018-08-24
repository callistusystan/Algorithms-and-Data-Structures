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
  A.push_back(INT_MAX);
  int ans = 1, i = 0;
  while (i < N) {
    int cur = 0;
    while (i<N && A[i+1] <= 2*A[i]) {
      cur++; i++;
    }
    ans = max(ans, cur+1);
    i++;
  }
  cout << ans << endl;
  return 0;
}
