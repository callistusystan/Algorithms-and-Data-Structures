#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int A = 1234567, B = 123456, C = 1234;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;
  bool can = false;
  for (ll a=0;a<=N/A;a++) {
    for (ll b=0;b<=N/B;b++) {
      int cC = N-a*A - b*B;
      if (cC%C == 0 && cC/C >= 0) {
        can = true;
      }
    }
  }

  if (can) cout << "YES";
  else cout << "NO";
  cout << endl;
  return 0;
}
