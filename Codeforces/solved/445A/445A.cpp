#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (A[i][j] == '-') cout << '-';
      else if ((i+j)%2) cout << 'W';
      else cout << 'B';
    }
    cout << endl;
  }

  return 0;
}
