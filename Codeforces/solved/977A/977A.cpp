#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  while (K--) {
    if (N%10 == 0) N /= 10;
    else N--;
  }
  cout << N << endl;
  return 0;
}
