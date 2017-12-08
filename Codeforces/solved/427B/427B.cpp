#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, T, C; cin >> N >> T >> C;

  vi A(N), S(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (A[i] > T) {
      S[i] = 1;
    }
    if (i) S[i] += S[i-1];
  }

  int ans = 0;
  for (int i=0;i+C-1<N;i++) {
    if (S[i+C-1] - (i==0?0 : S[i-1]) == 0) {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
