#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, M; cin >> N >> M;

  ll sum = (N*(N+1))/2;
  ll remain = M%sum;

  for (int i=1;i<=N;i++) {
    if (remain < i) break;
    remain -= i;
  }

  cout << remain << endl;

  return 0;
}
