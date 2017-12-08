#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  int ans = 0;

  for (int i=0;i<N;i++) {
    int Pi, Qi; cin >> Pi >> Qi;

    if (Qi - Pi >= 2) ans++;
  }

  cout << ans << endl;

  return 0;
}
