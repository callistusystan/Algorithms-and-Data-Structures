#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi A(105), pointers(105);
vector<vi> ans(105);

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K; cin >> N >> K;
  int mn = 100, mx = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    mn = min(mn, A[i]);
    mx = max(mx, A[i]);
  }
  if (mx-mn > K) cout << "NO\n";
  else {
    cout << "YES\n";
    for (int i=0;i<N;i++) {
      vi cur;
      for (int j=0;j<mn;j++) cur.push_back(1);
      for (int j=0;j<A[i]-mn;j++) cur.push_back(j+1);
      for (int j=0;j<A[i];j++) {
        cout << cur[j] << " \n"[j==A[i]-1];
      }
    }
  }
  return 0;
}
