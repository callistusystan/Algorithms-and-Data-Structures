#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  double N,K; cin >> N >> K;
  double dS = 0;
  vector<pair<double, double>> A(N);
  for (int i=0;i<N;i++) cin >> A[i].first >> A[i].second;
  for (int i=0;i<N-1;i++) {
    dS += sqrt((A[i].X-A[i+1].X)*(A[i].X-A[i+1].X) +
               (A[i].Y-A[i+1].Y)*(A[i].Y-A[i+1].Y));
  }
  cout << fixed << setprecision(12) << (K*dS)/50 << endl;
  return 0;
}
