#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  set<int> s;
  for (int i=0;i<4;i++) {
    int N; cin >> N;
    s.insert(N);
  }

  cout << 4 - s.size() << endl;

  return 0;
}
