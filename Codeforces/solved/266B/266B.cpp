#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, T; cin >> N >> T;
  string S; cin >> S;

  for (int t=0;t<T;t++) {
    int i =0;
    while (i < N-1) {
      if (S[i] == 'B' && S[i+1] == 'G') {
        swap(S[i], S[i+1]);
        i++;
      }
      i++;
    }
  }

  cout << S << endl;

  return 0;
}
