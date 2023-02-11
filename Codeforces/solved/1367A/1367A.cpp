#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    string S; cin >> S;
    for (int i=0;i<S.size();i+=2) {
      cout << S[i];
    }
    cout << S.back() << endl;
  }
  return 0;
}
