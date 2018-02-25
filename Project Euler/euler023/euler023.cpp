#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll myexp(int a, int b) {
  if (b == 0) return 1;
  ll res = myexp(a, b/2);
  if (b%2) return res*res*a;
  return res*res;
}

bool isAbundant(int num) {
  if (num == 0) return 0;
  int tmp = num;
  map<int, int> primes;
  for (int i=2;i*i<=tmp;i++) {
    while (tmp%i == 0) {
      primes[i]++;
      tmp /= i;
    }
  }
  if (tmp > 1) primes[tmp]++;
  ll ans = 1;
  for (pii p : primes) {
    ans *= (myexp(p.first, p.second+1)-1)/(p.first-1);
  }
  return ans-num > num;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi flag(1e5+5);
  for (int i=12;i<=1e5;i++) {
    if (isAbundant(i)) flag[i] = 1;
  }

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    bool can = false;
    for (int i=12;i<=1e5;i++) {
      int j = N-i;
      if (12 <= j && j <= 1e5 && flag[i] && flag[j]) {
        can = true;
        break;
      }
    }
    if (can) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
