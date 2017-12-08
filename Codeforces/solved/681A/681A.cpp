#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  bool good = false;
  for (int i=0;i<N;i++) {
    string S; int r1,r2; cin >> S >> r1 >> r2;
    if (r1 >= 2400 && r2 > r1) good = true;
  }

  if (good) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
