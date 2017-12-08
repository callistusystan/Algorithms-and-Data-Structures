#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int N, M, A, B;
vi memo(1e4+5,-1);

int rec(int cur) {
  if (cur >= N) return 0;
  if (memo[cur] != -1) return memo[cur];

  memo[cur] = A+rec(cur+1);
  memo[cur] = min(memo[cur], B+rec(cur+M));

  return memo[cur];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M >> A >> B;
  cout << rec(0) << endl;

  return 0;
}
