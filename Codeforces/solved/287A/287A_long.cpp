#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<string> A(4);

bool isBox(int a, int b) {
  for (int i=0;i<2;i++) {
    for (int j=0;j<2;j++) {
      if (A[a+i][b+j] != A[a][b]) return false;
    }
  }
  return true;
}

bool check() {
  for (int i=0;i<3;i++) {
    for (int j=0;j<3;j++) {
      if (isBox(i,j)) return true;
    }
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<4;i++) cin >> A[i];

  bool can = check();
  for (int i=0;i<4;i++) {
    for (int j=0;j<4;j++) {
      char t = A[i][j];
      if (A[i][j] == '#') A[i][j] = '.';
      else A[i][j] = '#';
      can |= check();
      A[i][j] = t;
    }
  }
  if (can) cout << "YES";
  else cout << "NO";
  cout << endl;
  return 0;
}
