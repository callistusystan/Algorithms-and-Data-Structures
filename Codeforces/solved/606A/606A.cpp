#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi A(6);
  for (int i=0;i<6;i++) cin >> A[i];

  int extra = 0;
  for (int i=0;i<3;i++) {
    extra += max(0, (A[i] - A[i+3])/2);
  }
  for (int i=0;i<3;i++) {
    int need = max(0, A[i+3] - A[i]);
    if (need > extra) {
      cout << "No\n";
      return 0;
    }
    extra -= need;
  }
  cout << "Yes\n";

  return 0;
}
