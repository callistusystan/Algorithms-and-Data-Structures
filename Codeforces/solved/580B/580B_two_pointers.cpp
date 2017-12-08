#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,D; cin >> N >> D;
  vector<pair<ll,ll>> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i].first >> A[i].second;
  }
  sort(A.begin(), A.end());

  int r = 0;
  ll best = 0, sum = 0;
  for (int i=0;i<N;i++) {
    if (i) sum -= A[i-1].second;
    while (r < N && A[r].first - A[i].first < D) {
      sum += A[r].second;
      r++;
    }
    best = max(best, sum);
  }

  cout << best << endl;

  return 0;
}
