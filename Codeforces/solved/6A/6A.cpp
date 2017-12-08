#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi A(4);
  for (int i=0;i<4;i++) cin >> A[i];
  sort(A.begin(), A.end());

  bool triangle, segment;
  triangle = segment = false;
  do {
    int a, b, c;
    a = A[0]; b = A[1]; c = A[2];
    if (a < b+c && b < a+c && c < a+b) triangle = true;
    if (a == b+c) segment = true;
  } while (next_permutation(A.begin(), A.end()));

  if (triangle) cout << "TRIANGLE";
  else if (segment) cout << "SEGMENT";
  else cout << "IMPOSSIBLE";
  cout << endl;

  return 0;
}
