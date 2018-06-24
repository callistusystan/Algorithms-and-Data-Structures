#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  set<int> A;
  while (N--) {
    int x; cin >> x;
    if (x != 0) A.insert(x);
  }
  cout << A.size() << endl;
  return 0;
}
