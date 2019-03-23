#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M, P, ans;

void rec(string &s, int complaints, vector<int> &cnt1, set<string> &forbidden) {
  if ((int)s.size() == P) {
    if (!forbidden.count(s)) ans = min(ans, complaints);
    return;    
  } 
  for (int i=0;i<=1;i++) {
    s += '0'+i;
    rec(s, complaints + (i ? N-cnt1[s.size()-1] : cnt1[s.size()-1]), cnt1, forbidden);
    s.pop_back();
  }
}

void solve() {
  cin >> N >> M >> P;
  vector<string> A(N);
  vi cnt1(P);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    for (int j=0;j<P;j++) cnt1[j] += A[i][j] == '1';
  }
  set<string> forbidden;
  for (int i=0;i<M;i++) {
    string s; cin >> s;
    forbidden.insert(s);
  }
  string s;
  ans = INT_MAX/2;
  rec(s, 0, cnt1, forbidden);
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
