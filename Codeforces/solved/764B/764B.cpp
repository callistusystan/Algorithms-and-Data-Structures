#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  for (int i=0;i<N/2;i++) {
    if (i%2 == 0) swap(A[i], A[N-1-i]);
  }

  for (int i=0;i<N;i++) {
    cout << A[i] << " \n"[i==N-1];
  }

  return 0;
}
