#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int f(ll a) {
  int s = 0;
  while (a) {
    s += a%10;
    a /= 10;
  }
  return s;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  ll cur = 19;
  while (1) {
    if (N == 1) break;
    cur++;
    while (f(cur) != 10) cur++;
    N--;
  }
  cout << cur << endl;
  return 0;
}
