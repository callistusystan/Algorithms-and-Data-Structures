#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> nums(N);

  for (int i=1;i<=N;i++) {
    cin >> nums[i-1].first;
    nums[i-1].second = i;
  }

  sort(nums.begin(), nums.end());

  for (int i=0;i<N/2;i++) {
    cout << nums[i].second << " " << nums[N-i-1].second << endl;
  }

  return 0;
}
