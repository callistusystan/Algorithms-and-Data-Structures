#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

double EPS = 1e-9;
ll N, L;
vi A(1e4+5);

bool f(double cur) {
  // check end
  if (A[0] - cur > EPS) return false;
  if (A[N-1] + cur < L-EPS) return false;

  for (int i=0;i<N-1;i++) {
    if (A[i] + 2*cur < A[i+1] - EPS) return false;
  }

  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> L;
  for (int i=0;i<N;i++) {
    cin >> A[i];
  }

  sort(A.begin(), A.begin()+N);

  double lo = EPS, hi = L+EPS;
  int it = 0;
  while (fabs(hi-lo) > EPS && it++ < 1000) {
    double mid = (lo+hi)/2;

    if (f(mid)) hi = mid;
    else lo = mid;
  }

  cout << fixed << setprecision(12) << hi << endl;

  return 0;
}
