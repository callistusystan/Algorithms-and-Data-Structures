#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<vector<char>> A(N+5, vector<char>(M+5, '#'));
  for (int i=1;i<=N;i++)
    for (int j=1;j<=M;j++)
      cin >> A[i][j];

  vector<vi> hor(N+5, vi(M+5)), ver(N+5, vi(M+5));
  for (int i=1;i<=N;i++) {
    for (int j=1;j<=M;j++) {
      if (A[i][j] == '.') {
        hor[i][j] += (A[i][j-1] == '.');
        ver[i][j] += (A[i-1][j] == '.');
      }
      hor[i][j] += hor[i-1][j] + hor[i][j-1] - hor[i-1][j-1];
      ver[i][j] += ver[i-1][j] + ver[i][j-1] - ver[i-1][j-1];
    }
  }

  int Q; cin >> Q;
  while (Q--) {
    int a,b,c,d; cin >> a >> b >> c >> d;
    int ansHor, ansVer;
    ansHor = hor[c][d] - hor[a-1][d] - hor[c][b] + hor[a-1][b];
    ansVer = ver[c][d] - ver[a][d] - ver[c][b-1] + ver[a][b-1];
    cout << ansHor + ansVer << endl;
  }
  return 0;
}
