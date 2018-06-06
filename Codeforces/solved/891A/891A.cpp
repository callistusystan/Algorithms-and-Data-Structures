#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int n1 = count(A.begin(), A.end(), 1);
  if (n1) {
    cout << N-n1 << endl;
    return 0;
  }
  pii best = {-1,-1};
  for (int i=0;i+1<N;i++) {
    for (int j=i+1;j<N;j++) {
      if (__gcd(A[i], A[j]) == 1) {
        if (best.first == -1 || (j-i < best.second - best.first)) {
          best.first = i; best.second = j;
        }
        break;
      }
    }
  }
  if (best.first == -1) cout << "-1\n";
  else cout << best.second - best.first + N-1  << endl;
  return 0;
}
