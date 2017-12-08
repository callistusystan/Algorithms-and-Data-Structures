#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vi A(N), B(K);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<K;i++) cin >> B[i];

  sort(B.begin(), B.end());
  reverse(B.begin(), B.end());
  int j = 0;
  for (int i=0;i<N;i++) {
    if (A[i] == 0) {
      A[i] = B[j];
      j++;
    }
  }

  int cnt = 0;
  for (int i=1;i<N;i++) {
    if (A[i] > A[i-1]) cnt++;
  }

  if (cnt == N-1) cout << "No";
  else cout << "Yes";
  cout << endl;

  return 0;
}
