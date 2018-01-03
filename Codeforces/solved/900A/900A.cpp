#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int cntLeft = 0;
  for (int i=0;i<N;i++) {
    int x,y; cin >> x >> y;
    if (x < 0) cntLeft++;
  }
  if (cntLeft >= N-1 || cntLeft <= 1) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}
