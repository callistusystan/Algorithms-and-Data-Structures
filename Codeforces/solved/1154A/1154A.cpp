#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi nums(4);
  for (int i=0;i<4;i++) cin >> nums[i];
  sort(nums.begin(), nums.end());
  for (int i=0;i<3;i++) {
    cout << nums[3] - nums[i] << " \n"[i==2];
  }
  return 0;
}
