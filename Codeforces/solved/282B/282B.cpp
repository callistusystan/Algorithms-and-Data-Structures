#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  ll sum_a=0, sum_g=0;
  for (int i=0;i<N;i++) {
    int a_i, g_i; cin >> a_i >> g_i;
    if (sum_a + a_i - sum_g <= 500) {
      sum_a += a_i;
      cout << "A";
    } else {
      sum_g += g_i;
      cout << "G";
    }
  }
  cout << endl;
  return 0;
}
