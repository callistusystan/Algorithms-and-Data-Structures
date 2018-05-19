#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  vi heavy, metal;
  for (int i=0;i+4<N;i++) {
    if (S.substr(i,5) == "heavy") heavy.push_back(i);
    else if (S.substr(i,5) == "metal") metal.push_back(i);
  }
  ll ans = 0;
  int j = 0;
  for (int i : heavy) {
    while (j < (int)metal.size() && metal[j] < i) j++;
    ans += metal.size() - j;
  }
  cout << ans << endl;
  return 0;
}
