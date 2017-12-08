#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> A(N);
  ll S = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    S += A[i];
  }

  auto it = max_element(A.begin(), A.end());
  ll b = *it;

  cout << N*b - S << endl;

  return 0;
}
