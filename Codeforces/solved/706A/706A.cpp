#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A,B,N; cin >> A >> B >> N;
  double t = 10000000;
  for (int i=0;i<N;i++) {
    int xi,yi,vi; cin >> xi >> yi >> vi;
    int d2 = (xi-A)*(xi-A) + (yi-B)*(yi-B);
    double ti = (double)d2/(vi*vi);
    ti = sqrt(ti);
    t = min(t, ti);
  }

  cout << fixed << setprecision(10) << t << endl;

  return 0;
}
