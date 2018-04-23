#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A, B, N; cin >> A >> B >> N;
  string S = to_string(A);
  A *= 10;
  for (int i=0;i<=9;i++) {
    if ((A+i)%B == 0) {
      cout << S << i;
      N--;
      while (N--) cout << 0;
      cout << endl;
      return 0;
    }
  }
  cout << "-1\n";
  return 0;
}
