#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int sumTo(int n) {
  return n*(n+1)/2;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A,B; cin >> A >> B;
  int dist = abs(A-B);
  int moveA = dist/2;
  int moveB = dist - moveA;
  cout << sumTo(moveA) + sumTo(moveB) << endl;
  return 0;
}
