#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,S,T; cin >> N >> S >> T;
  vi A(N+5);
  for (int i=1;i<=N;i++) cin >> A[i];
  for (int i=0;i<N;i++) {
    if (S == T) {
      cout << i << endl;
      return 0;
    }
    S = A[S];
  }
  cout << "-1\n";
  return 0;
}
