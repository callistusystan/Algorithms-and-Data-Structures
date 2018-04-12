#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

double my_power(double a, int b) {
  if (b == 0) return 1;
  double res = my_power(a, b/2);
  if (b%2) return res*res*a;
  return res*res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  double M, N; cin >> M >> N;
  double ans = 0;
  for (double i=1;i<=M;i++) {
    ans += i*(my_power(i/M, N) - my_power((i-1)/M, N));
  }
  cout << fixed << setprecision(12) << ans << endl;
  return 0;
}
