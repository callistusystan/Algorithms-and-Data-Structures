#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int f(int cur, vi &B) {
  int ans = 0, i = 0, N = B.size();
  while (i < N) {
    i = lower_bound(B.begin()+i, B.end(), cur) - B.begin();
    if (i == N) break;
    ans += cur;
    cur *= 2;
    i++;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N), B;
  map<int, int> cnt;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    cnt[A[i]]++;
  }
  for (auto p : cnt) B.push_back(p.second);
  sort(B.begin(), B.end());
  int ans = 0;
  for (int i=1;i<=N;i++) ans = max(ans, f(i, B));
  cout << ans << endl;
  return 0;
}

// x + 2x + 4x + 8x
// (1+2+4+8+...)x