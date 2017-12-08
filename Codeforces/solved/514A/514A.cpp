#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  for (int i=0;i<N;i++) {
    if (i == 0 && S[i] == '9') continue;
    int D = S[i] - '0';
    if (9-D < D) S[i] = '0' + 9-D;
  }

  cout << S << endl;

  return 0;
}
