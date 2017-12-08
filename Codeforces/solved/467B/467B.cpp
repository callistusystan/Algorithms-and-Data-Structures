#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M,K;
  cin >> N >> M >> K;

  vi nums(M+1);
  for (int i=0;i<M+1;i++) {
    cin >> nums[i];
  }

  int ans = 0;
  for (int i=0;i<M;i++) {
    int diff = nums[M]^nums[i];
    if (__builtin_popcount(diff) <= K) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
