#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    ll pow = 2;
    while (true) {
      ll x = (1<<pow)-1;
      if (N%x == 0) {
        cout << N/x << endl;
        break;
      }
      pow++;
    }
  }
  return 0;
}
