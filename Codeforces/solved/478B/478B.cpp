#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, M; cin >> N >> M;

  ll A,B;
  ll a = N/M;
  if (N%M) {
    A = (M-N%M)*a*(a-1)/2 + (N%M)*(a+1)*a/2;
  } else {
    A = M*a*(a-1)/2;
  }

  ll b = N-(M-1);
  B = b*(b-1)/2;
  cout << A << " " << B << endl;

  return 0;
}
