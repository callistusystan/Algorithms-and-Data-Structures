#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A,B,C; cin >> A >> B >> C;
  bool can = false;
  for (int i=0;i<=C/A;i++) {
    int num = (C-A*i);
    if (num%B == 0 && num/B >= 0) can = true;
  }
  if (can) cout << "Yes";
  else cout << "No";
  cout << endl;
  return 0;
}
