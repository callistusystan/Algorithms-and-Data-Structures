#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  int cntMaj = N*N - N*N/2;
  if (K > cntMaj) cout << "NO\n";
  else {
    cout << "YES\n";
    for (int i=0;i<N;i++) {
      string S(N, 'S');
      for (int j=0;j<N;j++) {
        if (i%2 == j%2 && K > 0) {
          S[j] = 'L';
          K--;
        }
      }
      cout << S << endl;
    }
  }
  return 0;
}
