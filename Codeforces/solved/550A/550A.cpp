#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string S; cin >> S;
  int N = S.size();

  bool can = false;
  for (int i=0;i<N-1;i++) {
    if (S.substr(i,2) == "AB") {
      for (int j=i+2;j<N-1;j++) {
        if (S.substr(j,2) == "BA") {
          can = true;
          break;
        }
      }
      break;
    }
  }

  for (int i=0;i<N-1;i++) {
    if (S.substr(i,2) == "BA") {
      for (int j=i+2;j<N-1;j++) {
        if (S.substr(j,2) == "AB") {
          can = true;
          break;
        }
      }
      break;
    }
  }

  if (can) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
