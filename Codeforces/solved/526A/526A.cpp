#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  for (int i=0;i<N;i++) {
    if (S[i] == '.') continue;
    for (int j=1;i+4*j<N;j++) {
      bool can = true;
      for (int k=0;k<4;k++) if (S[i+j*(k+1)] == '.') can = false;
      if (can) {
        cout << "yes\n";
        return 0;
      }
    }
  }
  cout << "no\n";
  return 0;
}
