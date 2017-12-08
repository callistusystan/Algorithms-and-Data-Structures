

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; int N,K;
  cin >> S >> K;
  N = S.size();

  int cnt = 0, pos = -1;
  for (int i=N-1;i>=0;i--) {
    if (cnt == K) break;
    if (S[i] == '0') {
      pos = i;
      cnt++;
    }
  }

  if (cnt < K) cout << N-1;
  else cout << (N-pos) - K;
  cout << endl;

  return 0;
}
