#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

bool f(int Y) {
  vi seen(10);

  while (Y > 0) {
    int right = Y%10;
    if (seen[right]) return false;
    seen[right] = 1;
    Y/=10;
  }

  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int Y; cin >> Y;

  Y++;
  while (!f(Y)) Y++;

  cout << Y << endl;

  return 0;
}
