#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  vi freq(5);
  for (int i=0;i<N;i++) {
    int s_i; cin >> s_i;
    freq[s_i]++;
  }

  int ans = freq[4];
  ans += freq[3];
  freq[1] = max(0, freq[1] - freq[3]);
  ans += (freq[2]+1)/2;
  if (freq[2]%2) {
    freq[1] = max(0, freq[1] - 2);
  }
  ans += (freq[1]+3)/4;

  cout << ans << endl;

  return 0;
}
