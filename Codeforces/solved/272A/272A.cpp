#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int S = 0;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    S += ai;
  }

  int ans = 0;
  for (int i=1;i<=5;i++) {
    if ((S+i)%(N+1) != 1) ans++;
  }
  cout << ans << endl;

  return 0;
}
