#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(7);
  for (int i=0;i<7;i++) cin >> A[i];

  int i = 0;
  while (N > 0) {
    N -= A[i];
    if (N <= 0) {
      cout << i+1 << endl;
      return 0;
    }
    ++i;
    i %= 7;
  }
  return 0;
}
