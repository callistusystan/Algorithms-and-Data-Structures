#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M, P, ans;
vector<string> A(105);
vector<vi> cnt(105, vi(2));
set<string> forbidden;

void rec(int cur, int complaints, int remain, string &s) {
  if (cur == P || remain == 0) {
    if (!forbidden.count(s)) ans = min(ans, complaints);
    return;
  }
  rec(cur+1, complaints, remain, s);
  if (remain) {
    s[cur] = '0' + '1' - s[cur];
    rec(cur+1, complaints + abs(cnt[cur][0] - cnt[cur][1]), remain-1, s);
    s[cur] = '0' + '1' - s[cur];
  }
}

void solve() {
  for (int i=0;i<105;i++) for (int j=0;j<2;j++) cnt[i][j] = 0;
  cin >> N >> M >> P;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    for (int j=0;j<P;j++) cnt[j][A[i][j]-'0']++;
  }
  forbidden.clear();
  for (int i=0;i<M;i++) {
    string s; cin >> s;
    forbidden.insert(s);
  }
  string s;
  int complaints = 0;
  for (int i=0;i<P;i++) {
    if (cnt[i][1] >= cnt[i][0]) s += '1';
    else s += '0';
    complaints += min(cnt[i][1], cnt[i][0]);
  }
  ans = INT_MAX;
  for (int i=0;ans == INT_MAX;i++) {
    rec(0, complaints, i, s);
    // cerr << "testing: " << i << " " << ans << endl;
  } 
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  for (int i=1;i<=T;i++) {
    cout << "Case #" <<  i << ": ";
    solve();
  }
  return 0;
}
