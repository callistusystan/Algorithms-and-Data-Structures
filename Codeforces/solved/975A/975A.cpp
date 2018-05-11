#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  set<string> roots;
  for (int i=0;i<N;i++) {
    string si; cin >> si;
    set<char> seen;
    for (char c : si) seen.insert(c);
    string ti;
    for (char c : seen) ti += c;
    roots.insert(ti);
  }
  cout << roots.size() << endl;
  return 0;
}
