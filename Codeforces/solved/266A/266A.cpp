#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;

  int ans = 0;
  for (int i=1;i<N;i++) {
    if (S[i] == S[i-1]) ans++;
  }

  cout << ans << endl;

  return 0;
}
