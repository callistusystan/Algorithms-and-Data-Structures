#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  string ans(N, '0');
  for (int i=0;i<N;i+=2) ans[i] = '1';
  cout << ans << endl;
  return 0;
}
