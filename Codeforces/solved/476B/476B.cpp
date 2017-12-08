#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

string S1, S2;
int N, FINAL;
double memo[15][50];

double rec(int id, int cur) {
  if (id == N && cur == FINAL) return 1.0;
  else if (id == N && cur != FINAL) return 0.0;
  else if (memo[id][cur+15] != -1) return memo[id][cur+15];

  if (S2[id] == '?') {
    memo[id][cur+15] = 0.5*rec(id+1, cur+1) + 0.5*rec(id+1, cur-1);
  } else if (S2[id] == '+') {
    memo[id][cur+15] = rec(id+1, cur+1);
  } else {
    memo[id][cur+15] = rec(id+1, cur-1);
  }

  return memo[id][cur+15];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<15;i++) for(int j=0;j<50;j++) memo[i][j] = -1;

  cin >> S1; N = S1.size();
  FINAL = count(S1.begin(), S1.end(), '+') - count(S1.begin(), S1.end(), '-');
  cin >> S2;

  cout << fixed << setprecision(12) << rec(0, 0) << endl;

  return 0;
}
