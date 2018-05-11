#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  map<string, int> cnt;
  for (int i=0;i+1<N;i++) cnt[S.substr(i, 2)]++;
  string ans;
  int best = 0;
  for (auto p : cnt) {
    if (p.second > best) {
      ans = p.first;
      best = p.second;
    }
  }
  cout << ans << endl;
  return 0;
}
