#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int f(int num) {
  int cur = 10, i = 0;
  vi seen(1e5+5, -1);
  while (seen[cur] == -1) {
    seen[cur] = i++;
    if (num <= cur) {
      cur %= num;
    }
    cur *= 10;
    if (cur == 0) return 0;
  }
  return i - seen[cur];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<pii> memo(1e4+5);
  memo[3] = {1,3};
  for (int i=4;i<=1e4;i++) {
    pii p = {f(i),i};
    if (p.first > memo[i-1].first) memo[i] = p;
    else memo[i] = memo[i-1];
  }

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    cout << memo[N-1].second << endl;
  }
  return 0;
}
