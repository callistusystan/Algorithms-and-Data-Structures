#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int best, worst;
  int ans = 0;
  for (int i=0;i<N;i++) {
    int n; cin >> n;
    if (i == 0) {
      best = n;
      worst = n;
    } else {
      if (n > best) {
         best = n;
         ans++;
      } else if (n < worst) {
        worst = n;
        ans++;
      }
    }

  }
  cout << ans << endl;
  return 0;
}
