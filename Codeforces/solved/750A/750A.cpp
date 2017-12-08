#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;

  int tRemain = 240, ans = 0, cur = 5;

  while (ans < N && tRemain >= cur + K) {
    ans++;

    tRemain -= cur;
    cur+=5;
  }

  cout << ans << endl;

  return 0;
}
