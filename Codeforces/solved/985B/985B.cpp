#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M ;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  vi on(M);
  for (int i=0;i<N;i++)
    for (int j=0;j<M;j++) on[j] += A[i][j] == '1';
  for (int i=0;i<N;i++) {
    bool can = true;
    for (int j=0;j<M;j++) {
      if (A[i][j] == '1' && on[j] == 1) {
        can = false;
        break;
      }
    }
    if (can) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
