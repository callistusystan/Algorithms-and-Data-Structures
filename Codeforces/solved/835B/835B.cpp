#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll K; cin >> K;
  string S; cin >> S;
  int N = S.size();

  ll sum = 0;
  for (int i=0;i<N;i++) {
    sum += S[i] - '0';
  }

  if (sum >= K) cout << 0;
  else {
    sort(S.begin(), S.end());

    int ans = 0;
    for (int i=0;i<N;i++) {
      if (sum >= K) break;
      sum += '9'- S[i];
      ans++;
    }
    cout << ans;
  }
  cout << endl;

  return 0;
}
