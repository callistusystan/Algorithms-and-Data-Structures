#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K; cin >> N >> K;
  if (N/2 > K) cout << "-1\n";
  else if (N == 1) cout << "1\n";
  else {
    K -= N/2-1;
    cout << K << " " << K*2;
    int cur = 1;
    for (int i=2;i<N;i+=2) {
      while (cur == K || cur+1 == K || cur == 2*K || cur+1 == 2*K) cur++;
      if (i == N-1) {
        cout << " " << cur;
        break;
      }
      cout << " " << cur << " " << cur+1;
      cur+=2;
    }
    cout << endl;
  }
  return 0;
}
