#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  vi H(N), V(M); int cnt = 0;
  for (int i=0;i<N;i++)
    for (int j=0;j<M;j++)
      if (A[i][j] == '*') {
        H[i]++; V[j]++; cnt++;
      }

  if (cnt < N+M) {
    for (int i=0;i<N;i++) {
      for (int j=0;j<M;j++) {
        int destroy = H[i]+V[j];
        if (A[i][j] == '*') destroy -= 1;
        if (destroy == cnt) {
          cout << "YES\n";
          cout << i+1 << " " << j+1 << endl;
          return 0;
        }
      }
    }
  }
  cout << "NO\n";
  return 0;
}
