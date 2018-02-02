#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  int best = -1;
  while (N--) {
    int ai; cin >> ai;
    if (K%ai == 0) {
      if (best == -1 ) best = K/ai;
      else best = min(best, K/ai);
    }
  }
  cout << best << endl;
  return 0;
}
