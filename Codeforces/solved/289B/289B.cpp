#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M,D; cin >> N >> M >> D;
  vi A(N*M); set<int> R;
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      cin >> A[i*M+j];
      R.insert(A[i*M+j]%D);
    }
  }
  if (R.size() > 1) cout << "-1\n";
  else {
    sort(A.begin(), A.end());
    int x = A[(N*M-1)/2];
    int ans = 0;
    for (int i=0;i<N*M;i++) {
      ans += abs(A[i]-x)/D;
    }
    cout << ans << endl;
  }
  return 0;
}
