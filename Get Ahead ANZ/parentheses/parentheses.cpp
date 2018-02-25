#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int longestValidParentheses(string S) {
  /*
   * Solution uses a stack to determine when a
   * valid substring is found. We iterate over
   * the string and push the indices of '('.
   *
   * When a ')' is found, we pop the most recent
   * '(' index from the stack (if any) and check
   * if there is a valid substring that ends before
   * this '(' index. This step is important to make
   * sure we account for cases like '()()()'. This
   * is stored using an array.
   *
   * O(N) Time and Space complexity
   */
  stack<int> open;
  vi cnt(N);
  int ans = 0;
  for (int i=0;i<(int)S.size();i++) {
    if (S[i] == '(') open.push(i);
    else {
      if (open.size()) {
        int left = open.top(); open.pop();
        cnt[i] = i-left+1;
        if (left-1 >= 0) cnt[i] += cnt[left-1];
        ans = max(ans, cnt[i]);
      }
    }
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  cout << longestValidParentheses(S) << endl;
  return 0;
}
