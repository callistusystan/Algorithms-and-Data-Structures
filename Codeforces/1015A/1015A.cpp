#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi seen(M+1);
  for (int i=0;i<N;i++) {
    int l,r; cin >> l >> r;
    for (int j=l;j<=r;j++) seen[j] = 1;
  }
  vi ans;
  for (int i=1;i<=M;i++) if (!seen[i]) ans.push_back(i);
  cout << ans.size() << endl;
  for (int x : ans) cout << x << " ";
  cout << endl; 
  return 0;
}
