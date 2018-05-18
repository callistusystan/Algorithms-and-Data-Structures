#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> A(N);
  for (int i=0;i<N;i++) cin >> A[i];  
  vi next(N, -1), isRoot(N, 1);
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      if (i == j) continue;
      if (
        (A[i]%3 == 0 && A[i]/3 == A[j])
        || (A[i]*2 == A[j])
       ) {
         isRoot[j] = 0;
         next[i] = j;
       }
    }
  }
  for (int i=0;i<N;i++) {
    if (isRoot[i]) {
      int cur = i;
      while (cur != -1) {
        cout << A[cur] << " ";
        cur = next[cur];
      }
      cout << endl;
      break;
    }
  }
  return 0;
}
