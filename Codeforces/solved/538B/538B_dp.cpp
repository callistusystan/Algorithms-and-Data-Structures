#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

vi nums;
vector<vi> memo(2, vi(1e6+5, 1e6+5));

bool qb(int num) {
  while (num > 0) {
    if (num%10 > 1) return false;
    num /= 10;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=1;i<=1e6+5;i++) {
    if (qb(i)) {
      nums.push_back(i);
    }
  }

  memo[0][0] = memo[1][0] = 0;
  vi parent(1e6+5);
  int N; cin >> N;
  for (int i=1;i<=N;i++) {
    if (i >= nums[0]) {
      parent[i] = 0;
      memo[0][i] = 1 + memo[0][i-nums[0]];
    } else {
      memo[0][i] = 1e6+5;
    }
  }


  for (int i=1;i<(int)nums.size();i++) {
    for (int j=0;j<=N;j++) {
      memo[i%2][j] = memo[(i+1)%2][j];
      if (j >= nums[i]) {
        int res = 1 + memo[i%2][j-nums[i]];
        if (res < memo[i%2][j]) {
          memo[i%2][j] = res;
          parent[j] = i;
        }
      }
    }
  }

  cout << memo[((int)nums.size()-1)%2][N] << endl;

  while (N > 0) {
    cout << nums[parent[N]] << " ";
    N -= nums[parent[N]];
  }
  cout << endl;

  return 0;
}
