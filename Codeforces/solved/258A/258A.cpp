#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  int k = -1;
  for (int i=0;i<N;i++) {
    if (S[i] == '0' && k == -1) {
      k = i;
    }
  }

  if (k != -1) {
    for (int i=0;i<N;i++) {
      if (i == k) continue;
      cout << S[i];
    }
    cout << endl;
  } else {
    cout << S.substr(1) << endl;
  }

  return 0;
}
