#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (i) A[i] += A[i-1];
  }
  for (int i=0;i<N;i++) {
    if (i == N-1) {
      if (A[i] != 0) {
        cout << "YES" << endl;
        cout << 1 << endl;
        cout << 1 << " " << N << endl;
        return 0;
      }
    } else {
      if (A[i] != 0 && A[N-1] - A[i] != 0) {
        cout << "YES" << endl;
        cout << 2 << endl;
        cout << 1 << " " << i+1 << endl;
        cout << i+2 << " " << N << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;
  return 0;
}
