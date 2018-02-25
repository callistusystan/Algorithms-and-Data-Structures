#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int f(string cur) {
  int ans = 0;
  for (char c : cur) ans += c - '0';
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi memo(1e4+5);
  string cur = "2";
  for (int i=1;i<=1e4;i++) {
    memo[i] = f(cur);
    int carry = 0;
    for (int j=0;j<(int)cur.size();j++) {
      int d = cur[j]-'0';
      int res = d*2+carry;
      cur[j] = '0' + (res%10);
      carry = res/10;
    }
    if (carry) cur.push_back('0'+carry);
  }
  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    cout << memo[N] << endl;
  }
  return 0;
}
