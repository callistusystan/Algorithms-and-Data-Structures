#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N+5);
  for (int i=1;i<=N;i++) cin >> A[i];
  for (int i=1;i<=N;i++) {
    if (A[i]-A[i-1] > 15) {
      cout << A[i-1] + 15 << endl;
      return 0;
    }
  }
  cout << 90 << endl;
  return 0;
}
