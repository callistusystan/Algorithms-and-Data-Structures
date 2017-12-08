#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  for (int i=N/2;i>=1;i--) {
    int j = N-i;
    int g = __gcd(i,j);
    if (i/g + j/g == N) {
      cout << i/g << " " << j/g << endl;
      break;
    }
  }

  return 0;
}
