#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<vi> A(5, vi(5));
  for (int i=0;i<5;i++)
    for (int j=0;j<5;j++)
      cin >> A[i][j];
  vi order = {0,1,2,3,4};
  int ans = 0;
  do {
    int res = 0;
    for (int i=0;i<4;i++) {
      for (int j=i;j<4;j+=2){
        int p1 = order[j], p2 = order[j+1];
        res += A[p1][p2] + A[p2][p1];
      }
    }
    ans = max(ans, res);
  } while (next_permutation(order.begin(), order.end()));
  cout << ans << endl;
  return 0;
}
