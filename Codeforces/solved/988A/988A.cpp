#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  set<int> seen;
  vi candidates;
  for (int i=1;i<=N;i++) {
    int ai; cin >> ai;
    if (seen.count(ai)) continue;
    candidates.push_back(i);
    seen.insert(ai);
  }
  if ((int)candidates.size() >= K) {
    cout << "YES\n";
    for (int i=0;i<K;i++) cout << candidates[i] << " ";
    cout << endl;
  } else cout << "NO\n";
  return 0;
}
