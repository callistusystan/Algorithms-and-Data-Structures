#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  if (N == 1) {
    cout << "1 0\n";
    return 0;
  }
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int i = 0, j = N-1, ti = 0, tj = 0;
  while (i != j-1) {
    if (ti + A[i] <= tj + A[j]) {
      ti += A[i];
      i++;
    } else {
      tj += A[j];
      j--;
    }
  }
  cout << i+1 << " " << N-j << endl;
  return 0;
}
