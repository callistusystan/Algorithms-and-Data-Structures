#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M; cin >> N >> M;
  vi A(N+1);
  for (int i=1;i<=N;i++) cin >> A[i];
  int add = 0;
  while (M--) {
    int t; cin >> t;
    if (t == 1) {
      int i,x; cin >> i >> x;
      A[i] = x-add;
    } else if (t == 2) {
      int x; cin >> x;
      add += x;
    } else {
      int i; cin >> i;
      cout << A[i] + add << endl;
    }
  }
  return 0;
}
