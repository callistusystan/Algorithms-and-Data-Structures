#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<ll> A(3);
  for (int i=0;i<3;i++) cin >> A[i];
  sort(A.begin(), A.end());
  if (A[2] >= 2*(A[0]+A[1])) cout << A[0]+A[1];
  else {
    cout << (A[0]+A[1]+A[2])/3;
  }
  cout << endl;
  return 0;
}
