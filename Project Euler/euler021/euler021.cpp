#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<ll> memo(1e6+5);
vi flag(1e6+5, -1);

ll myexp(int a, int b) {
  if (b == 0) return 1;
  ll res = myexp(a, b/2);
  if (b%2) return res*res*a;
  return res*res;
}

ll sumDivisors(int num) {
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
  return ans-num;
}

bool isAmic(int a) {
  ll d_a = sumDivisors(a);
  if (a != d_a && sumDivisors(d_a) == a) {
    return true;
  }
  return false;
}

int main() {

  for (int i=1;i<=1e5;i++) {
    memo[i] = memo[i-1];
    if (isAmic(i)) memo[i] += i;
  }

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    cout << memo[N-1] << endl;
  }
  return 0;
}
