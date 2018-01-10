#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,T,K,D; cin >> N >> T >> K >> D;
  int t1 = (N+K-1)/K * T;
  int t2 = t1-1;
  int cnt = t2/T * K;
  if (t2 > D) cnt += (t2-D)/T*K;
  if (cnt >= N) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
