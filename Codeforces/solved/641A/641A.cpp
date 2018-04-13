#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  vi A(N), visited(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int cur = 0;
  while (0 <= cur && cur < N) {
    if (visited[cur]) {
      cout << "INFINITE\n";
      return 0;
    }
    visited[cur] = 1;
    if (S[cur] == '>') cur += A[cur];
    else cur -= A[cur];
  }
  cout << "FINITE\n";
  return 0;
}
