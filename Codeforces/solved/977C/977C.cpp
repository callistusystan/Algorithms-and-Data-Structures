#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  if (K == 0)   {
    if (A[0] == 1) cout << '-';
    cout << "1\n";
  } else {
    int cnt = upper_bound(A.begin(), A.end(), A[K-1]) - A.begin();
    if (cnt == K) cout << A[K-1] << endl;
    else cout << "-1\n";
  }
  return 0;
}
