#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S, T; cin >> S >> T;
  int N, M;
  N = S.size(); M = T.size();

  int pos = 1;
  for (int i=0;i<M;i++) {
    if (pos == N) break;
    if (S[pos-1] == T[i]) pos++;
  }
  cout << pos << endl;

  return 0;
}
