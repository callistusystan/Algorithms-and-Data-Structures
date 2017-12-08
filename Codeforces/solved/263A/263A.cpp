#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<5;i++)
    for (int j=0;j<5;j++) {
      int a; cin >> a;
      if (a == 1) {
        cout << abs(2-i) + abs(2-j) << endl;
      }
    }


  return 0;
}
