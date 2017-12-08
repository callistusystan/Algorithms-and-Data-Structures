#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

vi nums;
vector<vi> memo(70, vi(1000005, -1));

int rec(int id, int remain) {
  cout << id << " " << remain << endl;
  if (remain < 0) return 1e6+5;
  if (remain == 0) return 0;
  if (id == (int)nums.size() && remain == 0) return 0;
  else if (id == (int)nums.size() && remain != 0) return 1e6+5;
  if (memo[id][remain] != -1) return memo[id][remain];

  memo[id][remain] = min((int)1e6+5, rec(id+1, remain));
  memo[id][remain] = min(memo[id][remain], 1+rec(id, remain - nums[id]));

  return memo[id][remain];
}

void print(int id, int remain) {
  if (remain == 0) return;

  int res1;
  res1 = rec(id+1, remain);

  if (memo[id][remain] == res1) {
    print(id+1, remain);
  } else {
    cout << nums[id] << " ";
    print(id, remain - nums[id]);
  }
}

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
  reverse(nums.begin(), nums.end());

  int N; cin >> N;

  cout << rec(0, N) << endl;
  print(0, N);
  cout << endl;

  return 0;
}
