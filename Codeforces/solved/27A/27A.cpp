#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi used(3005);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    used[ai] = 1;
  }
  for (int i=1;i<=3005;i++) {
    if (!used[i]) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}
