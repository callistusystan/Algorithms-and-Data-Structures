#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  int spec = 3;
  for (int i=0;i<N;i++) {
    if (A[i] == spec) {
      cout << "NO\n";
      return 0;
    }
    spec = 6 - A[i] - spec;
  }
  cout << "YES\n";
  return 0;
}
