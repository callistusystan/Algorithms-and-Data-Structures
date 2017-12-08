#include <bits/stdc++.h>
using namespace std;

#define SZ(x) (int)x.size()

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, K; cin >> N >> K;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  if (K <= N-1) {
    vi S(N+5);
    int i=0,j=1;
    while (i<N && j<N) {
      if (A[i] > A[j]) {
        S[i]++;
        if (S[i] >= K) {
          cout << A[i] << endl;
          return 0;
        }
        j = max(i,j)+1;
      } else {
        S[j]++;
        if (S[j] >= K) {
          cout << A[j] << endl;
          return 0;
        }
        i = max(i,j)+1;
      }
    }
  }
  cout << *max_element(A.begin(), A.end()) << endl;
  return 0;
}
