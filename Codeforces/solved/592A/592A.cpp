#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<string> A(8);
map<char, int> best;

void check(int x, int y) {
  if (A[x][y] == '.') return;
  else if (A[x][y] == 'W') {
    for (int i=0;i<x;i++) {
      if (A[i][y] == 'B') return;
    }
    best['W'] = min(best['W'], x);
  } else {
    for (int i=x+1;i<8;i++) {
      if (A[i][y] == 'W') return;
    }
    best['B'] = min(best['B'], 7-x);
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<8;i++) cin >> A[i];
  best['W'] = 1000;
  best['B'] = 1000;
  for (int i=0;i<8;i++) {
    for (int j=0;j<8;j++) {
      check(i,j);
    }
  }
  if (best['W'] <= best['B']) cout << 'A';
  else cout << 'B';
  cout << endl;
  return 0;
}
