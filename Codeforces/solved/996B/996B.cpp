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
  int mn = *min_element(A.begin(), A.end());
  for (int i=0;i<N;i++) A[i] -= mn/N*N;
  for (int k=0;k<2;k++) {
    for (int i=0;i<N;i++) {
      if (A[i] <= i) {
        cout << i+1 << endl;
        return 0;
      }
      A[i] -= N;
    }
  }
  cout << "-1\n";
  return 0;
}
