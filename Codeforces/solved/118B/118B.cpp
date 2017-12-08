#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  for (int row=-N;row<=N;row++) {
    int M = N - abs(row);

    for (int i=0;i<abs(row);i++) {
      cout << "  ";
    }
    for (int i=0;i<=M;i++) {
      if (i) cout << " ";
      cout << i;
    }
    for (int i=M-1;i>=0;i--) {
      cout << " " << i;
    }
    cout << endl;
  }

  return 0;
}
