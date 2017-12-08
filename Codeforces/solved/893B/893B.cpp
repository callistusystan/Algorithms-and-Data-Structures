#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool check(int x) {
  int k = 0;
  while (x%2 == 0) {
    k++;
    x >>= 1;
  }
  for (int i=0;i<k+1;i++) {
    if (x%2 == 0) return false;
    x >>= 1;
  }
  return x == 0;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=N;i>=1;i--) {
    if (N%i) continue;
    if (check(i)) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
