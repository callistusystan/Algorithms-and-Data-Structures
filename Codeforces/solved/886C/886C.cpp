#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi used(2e5+5);
  int ans = 1;
  for (int i=1;i<=N;i++) {
    int ai; cin >> ai;
    if (!used[ai]) used[ai] = 1;
    else ans++;
  }
  cout << ans << endl;
  return 0;
}
