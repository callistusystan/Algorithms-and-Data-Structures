#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<string> A(4);
int f(int i, int j) {
  return A[i][j] == '#';
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<4;i++) cin >> A[i];
  for (int i=0;i<3;i++) {
    for (int j=0;j<3;j++) {
      if (f(i,j) + f(i+1,j) + f(i,j+1) + f(i+1,j+1) != 2) {
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";
  return 0;
}
