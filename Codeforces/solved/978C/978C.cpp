#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<ll> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (i) A[i] += A[i-1];
  }
  while (M--) {
    ll bi; cin >> bi;
    int dorm = lower_bound(A.begin(), A.end(), bi) - A.begin();
    cout << dorm+1 << " " << bi - (dorm == 0 ? 0 : A[dorm-1]) << endl;
  }
  return 0;
}
