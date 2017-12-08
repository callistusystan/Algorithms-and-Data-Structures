#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int N, K;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> K;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  int ans = 0;
  for (int i=1;i<N;i++) {
    ans += max(K-A[i-1]-A[i], 0);
    A[i] += max(K-A[i-1]-A[i], 0);
  }

  cout << ans << endl;
  for (int i=0;i<N;i++) {
    cout << A[i] << " \n"[i==N-1];
  }


  return 0;
}
