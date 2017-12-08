#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S,T;
  cin >> S >> T;

  cout << max(abs(S[0]-T[0]), abs(S[1]-T[1])) << endl;

  while (S != T) {
    if (S[0] < T[0]) {
      cout << 'R';
      S[0]++;
    } else if (S[0] > T[0]) {
      cout << 'L';
      S[0]--;
    }

    if (S[1] > T[1]) {
      cout << 'D';
      S[1]--;
    } else if (S[1] < T[1]) {
      cout << 'U';
      S[1]++;
    }
    cout << endl;
  }

  return 0;
}
