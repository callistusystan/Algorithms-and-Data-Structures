#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi L(3);
  for (int i=0;i<3;i++) cin >> L[i];

  sort(L.begin(), L.end());

  cout << L[2]-L[0] << endl;
  return 0;
}
