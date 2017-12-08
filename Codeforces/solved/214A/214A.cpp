#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;

  int ans = 0;
  for (int a=0;a<=1000;a++) {
    for (int b=0;b<=1000;b++) {
      if (a*a + b == N && a + b*b == M) ans++;
    }
  }

  cout << ans << endl;

  return 0;
}
