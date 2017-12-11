#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
string S;
set<char> A;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> S;
  for (char c : S) A.insert(c);
  vi dp(1e5+5);

  for (char c : A) {
    int last = -1;
    for (int i=0;i<N;i++) {
      if (S[i] == c) last = i;
      if (last == -1) dp[i] = 1e9;
      else dp[i] = max(dp[i], i-last+1);
    }
  }
  cout << *min_element(dp.begin(), dp.begin()+N) << endl;
  return 0;
}
