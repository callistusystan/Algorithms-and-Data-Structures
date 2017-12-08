#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi nums(N), freq(N);
  for (int i=0;i<N;i++) {
    cin >> nums[i];
  }

  sort(nums.begin(), nums.end());

  for (int i=0;i<N;i++) {
    freq[i] = nums[i] + (i == 0 ? 0 : freq[i-1]);
  }

  for (int i=N-1;i>=0;i--) {
    int mine = freq[N-1] - (i==0 ? 0 : freq[i-1]);
    int other = (i==0 ? 0 : freq[i-1]);
    if (mine > other) {
      cout << N-i << endl;
      break;
    }
  }

  return 0;
}
