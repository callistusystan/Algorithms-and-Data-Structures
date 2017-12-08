#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,M,A; cin >> N >> M >> A;

  cout << ((N+A-1)/A) * ((M+A-1)/A) << endl;

  return 0;
}
