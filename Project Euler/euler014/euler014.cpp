#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

unordered_map<ll, ll> memo;

ll f(int i) {
  if (i == 1) return 0;
  else if (memo.count(i)) return memo[i];
  if (i%2) return memo[i] = 1+f(3*i+1);
  return memo[i] = 1+f(i/2);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=1;i<=5e6;i++) f(i);
  vector<ll> best(5e6+5);
  best[1] = 0;
  for (int i=2;i<=5e6;i++) {
    if (memo[i] >= memo[best[i-1]]) best[i] = i;
    else best[i] = best[i-1];
  }

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    cout << best[N] << endl;
  }
  return 0;
}
