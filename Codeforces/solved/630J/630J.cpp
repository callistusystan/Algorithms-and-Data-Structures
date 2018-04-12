#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int LCM(int a, int b) {
  return a*b/__gcd(a, b);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int lcm = 1;
  for (int i=2;i<=10;i++) lcm = LCM(lcm, i);
  ll N; cin >> N;
  cout << N/lcm << endl;
  return 0;
}
