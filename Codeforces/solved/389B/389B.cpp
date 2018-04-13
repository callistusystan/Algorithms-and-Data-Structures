#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
vector<string> A(105);

bool f(int i, int j) {
  if (0 < j && j+1 < N && i+2 < N) {
    if (
      A[i][j] == '#'
      && A[i+1][j-1] == '#'
      && A[i+1][j] == '#'
      && A[i+1][j+1] == '#'
      && A[i+2][j] == '#'
    ) {
      A[i][j] = '.';
      A[i+1][j-1] = '.';
      A[i+1][j] = '.';
      A[i+1][j+1] = '.';
      A[i+2][j] = '.';
      return true;
    }
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      if (A[i][j] == '#') {
        if (!f(i, j)) {
          cout << "NO\n";
          return 0;
        }
      }
    }
  }
  cout << "YES\n";
  return 0;
}
