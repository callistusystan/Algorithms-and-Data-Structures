#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

ll BAD = LLONG_MIN/2;

int N;
vi choices(3);
vector<ll> memo(4030, -1);

ll rec(int cur) {
  if (cur == 0) return 0;
  if (memo[cur] != -1) return memo[cur];

  memo[cur] = -2;
  for (int i=0;i<3;i++) {
    if (cur >= choices[i]) {
      ll res = rec(cur-choices[i]);
      if (res >= 0)
        memo[cur] = max(memo[cur], 1 + res);
    }
  }
  return memo[cur];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  for (int i=0;i<3;i++) cin >> choices[i];

  cout << rec(N) << endl;
  return 0;
}
