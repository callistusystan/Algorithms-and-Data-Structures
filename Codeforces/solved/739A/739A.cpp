#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  int mx = N;
  while (M--) {
    int l,r; cin >> l >> r;
    mx = min(mx, r-l+1);
  }
  cout << mx << endl;
  for (int i=0;i<N;i++) {
    cout << i%mx << " \n"[i==N-1];
  }
  return 0;
}
