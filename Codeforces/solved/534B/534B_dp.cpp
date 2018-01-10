#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int V1,V2,T,D;
vector<vi> memo(105, vi(100000, -1));

int rec(int t, int v) {
  if (t == T-1 && v == V2) return v;
  else if (t == T-1 && v != V2) return -2;
  else if (v < 1) return -2;
  else if (memo[t][v] != -1) return memo[t][v];
  int ans = -2;
  for (int i=v-D;i<=v+D;i++) {
    int res = rec(t+1,i);
    if (res != -2) ans = max(ans, v+res);
  }
  return memo[t][v] = ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> V1 >> V2 >> T >> D;
  cout << rec(0,V1) << endl;
  return 0;
}
