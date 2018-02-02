#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, R; cin >> N >> R;
  vi X(N);
  vector<double> Y(N, -1e5);
  for (int i=0;i<N;i++) cin >> X[i];
  for (int i=0;i<N;i++) {
    double lowest = R;
    for (int j=0;j<i;j++) {
      if (abs(X[i]-X[j]) <= 2*R) {
        double d = abs(X[i]-X[j]);
        lowest = max(lowest, Y[j]+sqrt((double)(2*R*2*R) - d*d));
      }
    }
    Y[i] = lowest;
  }
  for (int i=0;i<N;i++) {
    cout << fixed << setprecision(12) << Y[i] << " \n"[i==N-1];
  }
  return 0;
}
