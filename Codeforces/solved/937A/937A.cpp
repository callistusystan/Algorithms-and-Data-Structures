#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  set<int> seen;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (ai > 0) seen.insert(ai);
  }
  cout << seen.size() << endl;
  return 0;
}
