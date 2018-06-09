#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int days[] = {31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<48;i++) {
    bool can = true;
    for (int j=0;j<N;j++) {
      if (A[j] != days[(i+j)%48]) {
        can = false;
        break;
      }
    }
    if (can) {
      cout << "Yes\n\n";
      return 0;
    }
  }
  cout << "No\n\n";
  return 0;
}
