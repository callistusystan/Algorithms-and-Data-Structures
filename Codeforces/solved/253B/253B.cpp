#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int N; cin >> N;
  vi cnt(5001), psum(5001);
  for (int i=0;i<N;i++) {
    int x; cin >> x;
    cnt[x]++;
  }
  for (int i=1;i<=5000;i++) psum[i] = cnt[i] + psum[i-1];
  int ans = 1e9;
  for (int i=1;i<=5000;i++) ans = min(ans, psum[i-1] + psum[5000]-psum[min(5000, 2*i)]);
  cout << ans << endl;;
  return 0;
}
