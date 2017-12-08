#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int nGroups = 0;

  string last; cin >> last;
  for (int i=1;i<N;i++) {
    string cur; cin >> cur;
    if (last[1] == cur[0]) {
      nGroups++;
    }

    last = cur;
  }
  nGroups++;

  cout << nGroups << endl;

  return 0;
}
