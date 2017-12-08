#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll a,b,c,d;
  cin >> a >> b >> c >> d;

  cout << max(abs(a-c), abs(b-d)) << endl;

  return 0;
}
