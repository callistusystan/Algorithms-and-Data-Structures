#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  map<int, int> cnt;
  while (N--) {
    int ai; cin >> ai;
    cnt[ai]++;
  }
  while (M--) {
    int li, ri; cin >> li >> ri;
    int len = ri-li+1;
    if (len%2) cout << "0\n";
    else {
      if (cnt[1] >= len/2 && cnt[-1] >= len/2) cout << "1\n";
      else cout << "0\n";
    }
  }
  return 0;
}
