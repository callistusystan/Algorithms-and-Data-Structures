#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

bool f(int a, int b) {
  return (a%b == 0);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int K,L,M,N,D;
  cin >> K >> L >> M >> N >> D;
  int ans = 0;
  for (int i=1;i<=D;i++) {
    if (f(i,K) || f(i,L) || f(i,M) || f(i,N)) ans++;
  }

  cout << ans << endl;

  return 0;
}
