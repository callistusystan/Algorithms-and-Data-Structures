#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

double EPS = 1e-9, W;
int N;
vector<double> A;

bool f(double X) {
  for (int i=0;i<N;i++) {
    if (A[i] < X - EPS) return false;
  }
  for (int i=N;i<2*N;i++) {
    if (A[i] < 2*X - EPS) return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> W;
  A.resize(2*N);
  for (int i=0;i<2*N;i++) cin >> A[i];
  sort(A.begin(), A.end());

  double lo = 0, hi = W+EPS;
  int it = 0;
  while (fabs(hi-lo) > EPS && it++ < 50) {
    double mid = (lo+hi)/2;
    double X = mid/(3*N);
    if (f(X)) lo = mid;
    else hi = mid;
  }
  cout << fixed << setprecision(12) << lo << endl;
  return 0;
}
