#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K; cin >> N >> K;
  if (N/2 > K) cout << "-1\n";
  else if (N == 1) {
    if (K == 0) cout << "1\n";
    else cout << "-1\n";
  } else {
    K -= N/2-1;
    cout << K << " " << K*2;
    for (int i=2;i<N;i++) {
      cout << " " << 2*K+i-1;
    }
    cout << endl;
  }
  return 0;
}
