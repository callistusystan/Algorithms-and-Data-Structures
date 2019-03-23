#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int Q; cin >> Q;
  while (Q--) {
    ll N, A, B; cin >> N >> A >> B;
    cout << N/2*min(2*A, B) + (N%2)*A << endl;
  }
  return 0;
}
