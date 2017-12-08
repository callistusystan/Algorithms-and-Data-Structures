#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

string K[] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  char C; cin >> C;
  int S;
  if (C == 'R') S = -1;
  else S = 1;

  string M; cin >> M;
  int N = M.size();
  for (int i=0;i<N;i++) {
    for (int j=0;j<3;j++) {
      auto it = find(K[j].begin(), K[j].end(), M[i]);
      if (it != K[j].end()) {
        int k = it - K[j].begin();
        cout << K[j][k+S];
        break;
      }
    }
  }
  cout << endl;

  return 0;
}
