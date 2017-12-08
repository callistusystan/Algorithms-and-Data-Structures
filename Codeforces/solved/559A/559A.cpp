#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<ll> A(6);
  for (int i=0;i<6;i++) cin >> A[i];

  ll bigTriSide = A[0] + A[1] + A[2];
  cout << (bigTriSide*bigTriSide) - A[0]*A[0] - A[2]*A[2] - A[4]*A[4] << endl;

  return 0;
}
