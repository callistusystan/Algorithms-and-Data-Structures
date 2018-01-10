#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M; cin >> N >> M;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  while (M--) {
    int l,r,x; cin >> l >> r >> x;
    l--; r--; x--;
    int cnt = 0;
    for (int i=l;i<=r;i++)
      if (A[i] < A[x]) cnt++;
    if (l+cnt == x) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}
