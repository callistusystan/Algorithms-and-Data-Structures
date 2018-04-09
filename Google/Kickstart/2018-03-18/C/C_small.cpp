#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve() {
  int L; cin >> L;
  vector<string> dict(L);
  for (int i=0;i<L;i++) cin >> dict[i];
  string S = "--";
  cin >> S[0] >> S[1];
  int N,A,B,C,D; cin >> N >> A >> B >> C >> D;
  vector<ll> X(N);
  X[0] = S[0]; X[1] = S[1];
  for (int i=2;i<N;i++) {
    X[i] = (A*X[i-1] + B*X[i-2] + C)%D;
    char c = 'a' + (X[i]%26);
    S += c;
  }
  // prefix sum of chars
  vector<vi> ps(N, vi(26));
  for (int i=0;i<N;i++) {
    ps[i][S[i]-'a']++;
    if (i)
      for (int j=0;j<26;j++) ps[i][j] += ps[i-1][j];
  }
  int ans = 0;
  for (int i=0;i<L;i++) {
    vi cnt(26);
    for (char c:dict[i]) cnt[c-'a']++;
    int l = dict[i].size();
    for (int j=0;j+l-1<N;j++) {
      if (S[j] == dict[i][0] && S[j+l-1] == dict[i].back()) {
        bool can = true;
        for (int k=0;k<26;k++) {
          int freq = ps[j+l-1][k] - (j == 0 ? 0 : ps[j-1][k]);
          if (freq != cnt[k]) {
            can = false;
            break;
          }
        }
        if (can) {
          ans++;
          break;
        }
      }
    }
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  for (int t=1;t<=T;t++) {
    cout << "Case #" << t << ": ";
    solve();
  }
  return 0;
}
