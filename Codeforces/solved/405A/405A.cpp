#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi nums(N);
  for (int i=0;i<N;i++) cin >> nums[i];

  sort(nums.begin(), nums.end());

  for (int i=0;i<N;i++) {
    cout << nums[i] << " \n"[i==N-1];
  }

  return 0;
}
