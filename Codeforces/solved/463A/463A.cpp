#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, S; cin >> N >> S;

  int ans = -1;
  for (int i=0;i<N;i++) {
    int xi, yi; cin >> xi >> yi;
    if (S > xi)
      ans = max(ans, (100-yi)%100);
    else if (S == xi && yi == 0)
      ans = max(ans, 0);
  }

  cout << ans << endl;

  return 0;
}
