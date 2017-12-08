#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi nums(2);
  int N; cin >> nums[0] >> nums[1] >> N;

  int cur = 0;
  while (1) {
    int take = __gcd(N, nums[cur]);
    if (take > N) {
      break;
    }
    N-= take;
    cur = 1-cur;
  }

  cout << 1-cur << endl;

  return 0;
}
