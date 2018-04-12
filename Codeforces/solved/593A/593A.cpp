#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<string> A(N);
  map<string, int> words;
  for (int i=0;i<N;i++) {
    string ai; cin >> ai;
    set<char> seen;
    for (char c : ai) seen.insert(c);
    if (seen.size() == 1)
      words[to_string(*seen.begin())] += ai.size();
    else if (seen.size() == 2)
      words[to_string(*seen.begin()) + *seen.rbegin()] += ai.size();
  }
  int ans = 0;
  for (char i='a';i<='z';i++) {
    ans = max(ans, words[to_string(i)]);
    for (char j=i+1;j<='z';j++) {
      ans = max(ans, words[to_string(i)]+words[to_string(j)] + words[to_string(i)+j]);
    }
  }
  cout << ans << endl;
  return 0;
}
