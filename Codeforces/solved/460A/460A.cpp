#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M;
  cin >> N >> M;

  int i = 1;
  while (N > 0) {
    N--;
    if (i%M == 0) N++;
    i++;
  }

  cout << i-1 << endl;

  return 0;
}
