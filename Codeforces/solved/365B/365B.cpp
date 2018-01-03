#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> A(N);
  vi good(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (A[i] == A[i-1] + A[i-2]) good[i] = 1;
  }
  int ans = 0, cur = 0;
  for (int i=0;i<N;i++) {
    cur += good[i];
    ans = max(ans, cur);
    if (good[i] == 0) cur = 0;
  }
  cout << min(N, ans + 2) << endl;
  return 0;
}
