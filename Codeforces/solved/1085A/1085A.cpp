#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  string T;
  int l = 0, r = N-1, cur = N%2;
  while (l <= r) {
    if (cur == 1) T += S[l++];
    else T += S[r--];
    cur = 1-cur;
  }
  reverse(T.begin(), T.end());
  cout << T << endl;
  return 0;
}
