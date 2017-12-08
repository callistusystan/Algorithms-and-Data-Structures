#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  for (int i=0;i<N;i++) {
    cout << A[i] + (i+1 < N ? A[i+1] : 0) << " ";
  }
  cout << endl;

  return 0;
}
