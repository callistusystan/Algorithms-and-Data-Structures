#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  int i = 0;
  while (i < N) {
    if (N-i == 3) {
      cout << S.substr(i, 3) << endl;
      i += 3;
    } else {
      cout << S.substr(i, 2) << (N-i > 2 ? '-' : '\n');
      i += 2;
    }
  }
  return 0;
}
