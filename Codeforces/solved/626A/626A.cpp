#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  int ans = 0;
  for (int i=0;i<N-1;i++) {
    for (int j=i+1;j<N;j++) {
      pii pos = {0,0};
      for (int k=i;k<=j;k++) {
        if (S[k] == 'U') pos.second--;
        else if (S[k] == 'R') pos.first++;
        else if (S[k] == 'D') pos.second++;
        else pos.first--;
      }
      if (pos.first == 0 && pos.second == 0) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
