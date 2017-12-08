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

  int cnt = 0, size1 = -1;
  for (int i=0;i<N;i++) {
    int b = (i == N-1 ? A[0] : A[i+1]);
    if (A[i] > b) {
      cnt++;
      if (size1 == -1) size1 = i+1;
    }
  }

  if (cnt == 0) cout << 0;
  else if (cnt == 1) cout << N-size1;
  else cout << -1;
  cout << endl;

  return 0;
}
