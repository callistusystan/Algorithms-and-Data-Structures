#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int Y,W; cin >> Y >> W;
  int mustGet = max(Y, W);

  int num = 6-mustGet+1;
  int den = 6;

  cout << num/__gcd(num, den) << "/" << den/__gcd(num, den) << endl;

  return 0;
}
