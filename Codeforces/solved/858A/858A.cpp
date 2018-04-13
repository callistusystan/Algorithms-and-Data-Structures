#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int f(ll N, int x) {
  int ans = 0;
  while (N%x == 0) {
    ans++;
    N /= x;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,K; cin >> N >> K;
  ll fac = 1;
  int n2=f(N,2), n5=f(N,5);
  while (n2 < K) {
    fac *= 2;
    n2++;
  }
  while (n5 < K) {
    fac *= 5;
    n5++;
  }
  cout << N * fac << endl;
  return 0;
}
