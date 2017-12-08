#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  // try to swap with first even digit thats smaller
  int j = -1, k = -1;
  for (int i=N-2;i>=0;i--) {
    if ((S[i]-'0')%2 == 0) {
      if (S[N-1] > S[i]) {
        j = i;
      } else if (k == -1) {
        k = i;
      }
    }
  }

  if (j != -1) {
    swap(S[N-1], S[j]);
  } else if (k != -1) {
    swap(S[N-1], S[k]);
  } else {
    cout << -1 << endl;
    return 0;
  }

  cout << S << endl;

  return 0;
}
