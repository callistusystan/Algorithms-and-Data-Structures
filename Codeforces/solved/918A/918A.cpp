#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi A(1005);
  int a,b;
  a = 0; b = 1;
  while (b <= 1000) {
    A[b] = 1;
    int tmp = b;
    b += a;
    a = tmp;
  }
  int N; cin >> N;
  for (int i=1;i<=N;i++) {
    if (A[i]) cout << 'O';
    else cout << 'o';
  }
  cout << endl;
  return 0;
}
