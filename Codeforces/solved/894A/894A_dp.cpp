#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
string S;
string target = "QAQ";
vector<vi> memo(105, vi(3, -1));

ll f(int i, int j) {
  if (i == N) return 0;
  if (memo[i][j] != -1) return memo[i][j];
  ll ans = f(i+1, j);
  if (S[i] == target[j]) {
    if (j == 2) ans++;
    else ans += f(i+1, j+1);
  }
  return memo[i][j] = ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> S;
  N = S.size();

  cout << f(0, 0) << endl;
  return 0;
}
