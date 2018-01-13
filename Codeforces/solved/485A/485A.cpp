#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A, M; cin >> A >> M;
  for (int i=0;i<20;i++) {
    A = (A+A%M)%M;
    if (A%M == 0) {
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}
