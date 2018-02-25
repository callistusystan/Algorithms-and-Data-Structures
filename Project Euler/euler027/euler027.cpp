#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<bool> isPrime(1e7+5, 1);
  for (ll i=2;i<=1e7;i++) {
    if (isPrime[i]) {
      for (ll j=i*i;j<=1e7;j+=i)
        isPrime[j] = 0;
    }
  }

  int N; cin >> N;
  pair<int, pii> best = { 42, { -1, 41 } };
  for (int a=-N;a<=N;a++) {
    for (int b=-N;b<=N;b++) {
      int cur = 0;
      while (cur*cur + a*cur + b >= 0 && isPrime[cur*cur + a*cur + b]) cur++;
      best = max(best, { cur, { a, b } });
    }
  }
  cout << best.second.first << " " << best.second.second  << endl;
  return 0;
}
