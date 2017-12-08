#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int P, N; cin >> P >> N;
  vi A(P, -1);
  for (int i=1;i<=N;i++) {
    int ai; cin >> ai;
    if (A[ai%P] == -1) A[ai%P] = ai;
    else {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}
