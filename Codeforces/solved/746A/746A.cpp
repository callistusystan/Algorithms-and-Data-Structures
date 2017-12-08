#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A,B,C; cin >> A >> B >> C;
  int M = A;
  M = min(M, B/2);
  M = min(M, C/4);

  cout << M+M*2+M*4 << endl;

  return 0;
}
