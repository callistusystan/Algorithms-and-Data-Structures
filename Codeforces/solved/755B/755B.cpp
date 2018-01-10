#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<string> A(N);
  set<string> B;
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<M;i++) {
    string ai; cin >> ai;
    B.insert(ai);
  }
  int cnt = 0;
  for (string s : A) {
    if (B.count(s)) cnt++;
  }
  if (cnt%2) {
    if (N-cnt > M-cnt-1) cout << "YES\n";
    else cout << "NO\n";
  } else {
    if (N-cnt > M-cnt) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
