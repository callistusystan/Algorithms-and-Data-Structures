#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int N;
vi freq(1e5+5);
vector<ll> memo(1e5+5, -1);

ll rec(int cur) {
  if (cur > 1e5) return 0;
  if (memo[cur] != -1) return memo[cur];

  memo[cur] = rec(cur+1);
  if (freq[cur]) {
    memo[cur] = max(memo[cur], freq[cur]*cur + rec(cur+2));
  }

  return memo[cur];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=0;i<N;i++) {
    int n; cin >> n;
    freq[n]++;
  }

  cout << rec(1) << endl;

  return 0;
}
