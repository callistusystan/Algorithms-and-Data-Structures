#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N,M;
vector<string> A;

bool bad(int x, int y) {
  if (x-1 >= 0 && A[x-1][y] == 'W') return true;
  if (x+1 < N && A[x+1][y] == 'W') return true;
  if (y-1 >= 0 && A[x][y-1] == 'W') return true;
  if (y+1 < M && A[x][y+1] == 'W') return true;
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M;
  A.resize(N);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (A[i][j] == 'S' && bad(i, j)) {
        cout << "No\n";
        return 0;
      } else if (A[i][j] == '.') A[i][j] = 'D';
    }
  }
  cout << "Yes\n";
  for (string s : A) cout << s << endl;
  return 0;
}
