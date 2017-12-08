#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi nums(N);
  for (int i=0;i<N;i++) cin >> nums[i];

  int ans = 0;
  for (int i=0;i<N;i++) {
    for (int j=i;j<N;j++) {
      int sum = 0;
      for (int k=0;k<N;k++) {
        if (i <= k && k <= j) sum += 1-nums[k];
        else sum += nums[k];
      }
      ans = max(ans, sum);
    }
  }

  cout << ans << endl;

  return 0;
}
