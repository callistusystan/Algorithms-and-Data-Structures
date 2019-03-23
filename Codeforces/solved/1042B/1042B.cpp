#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pair<int, string>> A(N);
  map<char, int> cheapest;
  map<char, vi> vitamins;
  for (int i=0;i<N;i++) {
    int x; string s; cin >> x >> s;
    sort(s.begin(), s.end());
    A[i] = { x, s };
    for (char c : s) {
      vitamins[c].push_back(i);
      if (!cheapest.count(c)) cheapest[c] = x;
      cheapest[c] = min(cheapest[c], x);
    }
  }
  if (vitamins.size() < 3) {
    cout << "-1\n";
    return 0;
  }
  int ans = cheapest['A']+cheapest['B']+cheapest['C'];
  for (auto p : A) {
    if (p.second == "ABC") ans = min(ans, p.first);
  }
  for (int i=0;i+1<N;i++) {
    for (int j=i+1;j<N;j++) {
      set<char> have;
      for (char c : A[i].second) have.insert(c);
      for (char c : A[j].second) have.insert(c);
      if ((int)have.size() == 3) ans = min(ans, A[i].first + A[j].first);
    }
  }
  cout << ans << endl;
  return 0;
}
