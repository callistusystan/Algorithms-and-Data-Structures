#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  if (N == 1) cout << -1 << endl;
  else cout << N << " " << N+1 << " " << N*(N+1) << endl;
  return 0;
}
