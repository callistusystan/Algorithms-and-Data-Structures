#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int l = -2e9, r = 2e9;
  while (N--) {
    string si; int ai; char ans;
    cin >> si >> ai >> ans;
    if (ans == 'Y') {
      if (si == ">=") l = max(l, ai);
      else if (si == ">") l = max(l, ai+1);
      else if (si == "<=") r = min(r, ai);
      else r = min(r, ai-1);
    } else {
      if (si == ">=") r = min(r, ai-1);
      else if (si == ">") r = min(r, ai);
      else if (si == "<=")l = max(l, ai+1);
      else l = max(l, ai);
    }
  }
  if (l <= r) cout << l << endl;
  else cout << "Impossible\n";
  return 0;
}
