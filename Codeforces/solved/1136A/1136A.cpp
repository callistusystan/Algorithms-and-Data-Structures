#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> A(N);
  for (int i=0;i<N;i++) cin >> A[i].first >> A[i].second;
  int K; cin >> K;
  for (int i=0;i<N;i++) {
    if (K <= A[i].second) {
      cout << N-i << endl;
      return 0;
    }
  }
  cout << "0\n";
  return 0;
}
