#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi S(N), C(N);
  for (int i=0;i<N;i++) cin >> S[i];
  for (int i=0;i<N;i++) cin >> C[i];
  int ans = 1e9;
  for (int j=1;j+1<N;j++) {
    int c1 = 1e8+5, c2 = 1e8+5;
    for (int i=0;i<j;i++) if (S[i] < S[j]) c1 = min(c1, C[i]);
    for (int k=j+1;k<N;k++) if (S[j] < S[k]) c2 = min(c2, C[k]);
    if (c1 == 1e8+5 || c2 == 1e8+5) continue;
    ans = min(ans, c1+C[j]+c2);
  }
  if (ans == 1e9) cout << "-1\n";
  else cout << ans << endl;
  return 0;
}
