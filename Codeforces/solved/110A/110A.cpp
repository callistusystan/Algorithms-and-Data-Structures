#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

bool g(ll N) {
  if (N == 0) return false;

  while (N > 0) {
    int right = N%10;
    if (!(right == 4 || right == 7)) return false;
    N/=10;
  }

  return true;
}

bool f(ll N) {
  int cnt = 0;
  while (N > 0) {
    int right = N%10;
    if (right == 4 || right == 7) cnt++;
    N /= 10;
  }

  return g(cnt);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;

  if (f(N)) cout << "YES";
  else cout << "NO";
  cout << endl;


  return 0;
}
