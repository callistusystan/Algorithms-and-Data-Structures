#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;

  if (N > 26) {
    cout << -1;
  } else {
    set<char> seen;
    int ans = 0;
    for (int i=0;i<N;i++) {
      if (seen.count(S[i])) ans++;
      seen.insert(S[i]);
    }
    cout << ans;
  }
  cout << endl;


  return 0;
}
