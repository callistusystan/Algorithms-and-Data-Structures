#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
vi A(2e5+5), B(2e5+5);

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  bool all1 = true;
  for (int i=0;i<N;i++) {
    cin >> A[i] >> B[i];
    if (B[i] == 2) all1 = false;
  }
  if (all1) {
    cout << "Infinity\n";
    return 0;
  }
  if (N == 1) {
    // this means only 2
    cout << 1899 + A[0] << endl;
    return 0;
  }
  pii range = {-1e9, 1e9};
  for (int i=0;i<N;i++) {
    if (B[i] == 1) {
      range.first = max(1900, range.first);
    } else {
      range.second = min(1899, range.second);
    }
    range.first += A[i];
    range.second += A[i];
    if (range.first > range.second) {
      cout << "Impossible\n";
      return 0;
    }
  }
  cout << range.second << endl;
  return 0;
}
