#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
vector<vi> A(55, vi(55));

bool check(int a, int b) {
  for (int i=0;i<N;i++) {
    if (i == a) continue;
    for (int j=0;j<N;j++) {
      if (j == b) continue;
      if (A[i][b] + A[a][j] == A[a][b]) return true;
    }
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=0;i<N;i++)
    for (int j=0;j<N;j++)
      cin >> A[i][j];

  bool can = true;
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      if (A[i][j] != 1) can &= check(i,j);
    }
  }
  if (can) cout << "Yes";
  else cout << "No";
  cout << endl;

  return 0;
}
