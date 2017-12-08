#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (i) A[i] += A[i-1];
  }

  int M; cin >> M;
  for (int i=0;i<M;i++) {
    int Q; cin >> Q;
    auto it = lower_bound(A.begin(), A.end(), Q);

    cout << it - A.begin() + 1 << endl;
  }

  return 0;
}
