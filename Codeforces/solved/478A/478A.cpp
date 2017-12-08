#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int sum = 0;
  for (int i=0;i<5;i++) {
    int ai; cin >> ai;
    sum+=ai;
  }

  if (sum > 0 && sum%5 == 0) {
    cout << sum/5 << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}
