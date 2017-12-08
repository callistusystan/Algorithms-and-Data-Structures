#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int dr[] = {-1,0,1,0};
int dc[] = {0,1,0,-1};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<string> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
  }

  bool can = true;
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      int n = 0;
      for (int k=0;k<4;k++) {
        int r,c;
        r = i+dr[k]; c = j+dc[k];
        if (0 <= r && r < N && 0 <= c && c < N) {
          if (A[r][c] == 'o') {
            n++;
          }
        }
      }
      if (n%2) can = false;
    }
  }

  if (can) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
