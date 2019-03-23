#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  string ans;
  int cur = 1;
  for (int i=0;i<N;i+=cur) {
    ans += S[i];
    cur++;
  }
  cout << ans << endl;
  return 0;
}
