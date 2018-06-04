#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<vi> A(4, vi(11));
  for (int i=1;i<11;i++) A[2][i] = -1;
  int i=0, j=0, x=N;
  while (x--) {
    if (A[i][j] == -1) i++;
    A[i][j] = 1;
    i++;
    if (i == 4) i=0, j++;
  }
  cout << "+------------------------+\n";
  cout << '|';
  for (int j=0;j<11;j++) {
    if (A[0][j] == 1) cout << "O.";
    else cout << "#.";
  }
  cout << "|D|)\n";
  cout << '|';
  for (int j=0;j<11;j++) {
    if (A[1][j] == 1) cout << "O.";
    else cout << "#.";
  }
  cout << "|.|\n";
  if (N >= 3) cout << "|O.......................|\n";
  else cout << "|#.......................|\n";
  cout << '|';
  for (int j=0;j<11;j++) {
    if (A[3][j] == 1) cout << "O.";
    else cout << "#.";
  }
  cout << "|.|)\n";
  cout << "+------------------------+\n";
  return 0;
}
