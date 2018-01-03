#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M ;
  string S; cin >> S;
  while (M--) {
    int l,r; char a,b;
    cin >> l >> r >> a >> b;
    l--; r--;
    for (int i=l;i<=r;i++) {
      if (S[i] == a) S[i] = b;
    }
  }
  cout << S << endl;
  return 0;
}
