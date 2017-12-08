#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, T; cin >> N >> T;
  vector<ll> A(N);

  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (i) A[i] += A[i-1];
  }

  int best = 0;
  for (int i=0;i<N;i++) {
    int res = upper_bound(A.begin() + i, A.end(), (i == 0 ? 0 : A[i-1]) + T) - (A.begin() + i);
    best = max(res, best);
  }

  cout << best << endl;

  return 0;
}
