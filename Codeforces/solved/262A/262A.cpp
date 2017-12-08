#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K; cin >> N >> K;

  int ans = 0;
  for (int i=0;i<N;i++) {
    string si; cin >> si;
    int cnt = 0;
    for (char c : si) {
      if (c == '4' || c == '7') cnt++;
    }

    if (cnt <= K) ans++;
  }

  cout << ans << endl;

  return 0;
}
