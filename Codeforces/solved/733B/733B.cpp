#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> L(N), R(N);

  ll sumL, sumR; sumL = sumR = 0;
  for (int i=0;i<N;i++) {
    cin >> L[i] >> R[i];
    sumL += L[i];
    sumR += R[i];
  }

  ll best = abs(sumL - sumR); int col = -1;
  for (int i=0;i<N;i++) {
    ll res = abs((sumL - L[i] + R[i]) - (sumR - R[i] + L[i]));
    if (res > best) {
      best = res;
      col = i+1;
    }
  }

  if (col == -1) cout << 0;
  else cout << col;
  cout << endl;





  return 0;
}
