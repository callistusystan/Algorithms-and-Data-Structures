#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  vi ans(N);
  for (int i=0;i<N;i++) {
    ans[i] = 1e7-i;
  }
  for (int i=N-1;i>=0;i--) {
    cout << ans[i] << " \n"[i==0];
  }
  return 0;
}
