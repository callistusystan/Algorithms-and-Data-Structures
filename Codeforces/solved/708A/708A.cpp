#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  int pos = -1;
  for (int i=0;i<N;i++) {
    if (S[i] != 'a') {
      pos = i;
      break;
    }
  }

  if (pos == -1) {
    S[N-1] = 'z';
  } else {
    for (int i=pos;i<N;i++) {
      if (S[i] == 'a') break;
      S[i]--;
    }
  }
  cout << S << endl;

  return 0;
}
