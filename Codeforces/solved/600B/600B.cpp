#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M; cin >> N >> M;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  while (M--) {
    int bi; cin >> bi;
    cout << upper_bound(A.begin(), A.end(), bi) - A.begin() << " \n"[M == 0];
  }
  return 0;
}
