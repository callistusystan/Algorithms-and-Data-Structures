#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  ll num = 0;
  for (int i=0;i<N;i++) {
    ll pi; cin >> pi;
    num += pi;
  }

  cout << fixed << setprecision(12) << num/((double)N) << endl;

  return 0;
}
