#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(2*N);
  for (int i=0;i<2*N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  for (int i=N;i<2*N;i++) {
    for (int j=0;j<N;j++) {
      if (A[i] <= A[j]) {
        cout << "NO\n";
        return 0;
      }
    }
  }
  cout << "YES\n";
  return 0;
}
