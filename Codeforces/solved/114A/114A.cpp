#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll K, L; cin >> K >> L;

  int pwr = 1; ll cur = K;
  while (cur < L) {
    cur *= K;
    pwr++;
  }
  if (cur == L) {
    cout << "YES" << endl;
    cout << pwr - 1;
  } else cout << "NO";
  cout << endl;

  return 0;
}
