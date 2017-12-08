#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int N;
string S;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> S; N = S.size();

  for (int i=0;i<1000;i++) {
    if (i%8) continue;
    string cur = to_string(i);
    int k = 0;
    for (int j=0;j<N;j++) {
      if (S[j] == cur[k]) {
        k++;
      }
      if (k == (int)cur.size()) {
        cout << "YES" << endl;
        cout << cur << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;

  return 0;
}
