#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M; 
vector<string> A(105);
int dr[] = {-1,-1,-1,0,1,1,1,0};
int dc[] = {-1,0,1,1,1,0,-1,-1};

bool inRange(int x, int l, int r) {
  return l <= x && x <= r;
}

int countMines(int x, int y) {
  int ans = 0;
  for (int i=0;i<8;i++) {
    if (inRange(x+dr[i], 0, N-1) && inRange(y+dc[i], 0, M-1) && A[x+dr[i]][y+dc[i]] == '*') ans++;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M;
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++)
    for (int j=0;j<M;j++)
      if (A[i][j] == '.') A[i][j] = '0';
  
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (isdigit(A[i][j])) {
        if (A[i][j] != countMines(i, j) + '0') {
          cout << "NO\n";
          return 0;
        }
      }
    }
  }
  cout << "YES\n";
  return 0;
}
