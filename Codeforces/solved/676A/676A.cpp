#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int x,y;
  for (int i=1;i<=N;i++) {
    int ai; cin >> ai;
    if (ai == 1) x = i;
    if (ai == N) y = i;
  }
  if (y < x) swap(x,y);

  cout << max(N-1-x, y-0) << endl;

  return 0;
}
