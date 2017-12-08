#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;

  bool isR = true;
  for (int i=0;i<N;i++) {
    if (i%2) {
      string S(M, '.');
      if (isR) S[M-1] = '#';
      else S[0] = '#';

      isR = !isR;
      cout << S << endl;
    } else {
      string S(M, '#');
      cout << S << endl;
    }
  }

  return 0;
}
