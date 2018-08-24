#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, X, Y; cin >> N >> X >> Y;
  string S; cin >> S;
  vector<pair<int, char>> groups;
  int n0 = 0;
  for (int i=0;i<N;i++) {
    if (groups.empty() || groups.back().second != S[i]) {
      groups.push_back({ 0, S[i] });
      if (S[i] == '0') n0++;
    }
    groups[groups.size()-1].first++;
  }
  if (n0 == 0) cout << "0\n";
  else {
    cout << (n0-1)*1LL*min(X,Y) + Y << endl;
  }
  return 0;
}
