#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N,K;
vi S(1e5+5);

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> K;
  int ans = 0;
  for (int i=0;i<N;i++) {
    cin >> S[i];
    ans = max(ans, S[i]);
  }
  for (int i=0;i<N-K;i++) {
    ans = max(ans, S[i]+S[2*(N-K)-1-i]);
  }
  cout << ans << endl;
  return 0;
}
