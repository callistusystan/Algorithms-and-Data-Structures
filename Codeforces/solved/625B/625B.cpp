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
  int ans = 0;
  for (int i=0;i+M-1<N;i++) {
    bool match = true;
    for (int j=0;j<M;j++) {
      if (S[i+j] != T[j]) {
        match = false;
        break;
      }
    }
    if (match) {
      S[i+M-1] = '#';
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
