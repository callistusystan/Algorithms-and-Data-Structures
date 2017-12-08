#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  ll turns = 0;
  for (int i=0;i<N;i++) {
    ll ai; cin >> ai;
    turns += ai-1;
    if (turns%2) cout << 1;
    else cout << 2;
    cout << endl;
  }

  return 0;
}
