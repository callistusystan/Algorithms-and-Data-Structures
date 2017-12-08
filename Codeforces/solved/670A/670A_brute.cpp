#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int x=1000000,y=0;

  for (int i=0;i<=6;i++) {
    int d = 0;
    for (int j=i;j<i+N;j++) {
      if ((j%7 == 6) || (j%7 == 5)) d++;
    }
    x = min(x, d);
    y = max(y, d);
  }

  cout << x << " " << y << endl;

  return 0;
}
