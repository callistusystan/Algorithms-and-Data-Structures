#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
vi A(105);
vector<vi> memo(105, vi(3, -1));

int f(int id, int odd) {
  if (id == N && odd) return 0;
  else if (id == N && !odd) return 1;
  if (memo[id][odd] != -1) return memo[id][odd];
  int ans = 0;
  if (A[id]%2) {
    for (int i=id;i<N;i+=2) {
      if (A[i]%2) ans = max(ans, f(i+1, 1-odd));
    }
  }
  return memo[id][odd] = ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=0;i<N;i++) cin >> A[i];

  if (f(0,1)) cout << "Yes";
  else cout << "No";
  cout << endl;
  return 0;
}
