#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vi next(1e5+5); vector<bool> ok(1e5+5);
  int links = 0;
  for (int i=0;i<K;i++) {
    int ai; cin >> ai;
    links += ai-1;
    int prev; cin >> prev;
    ai--;
    while (ai--) {
      int cur; cin >> cur;
      next[prev] = cur;
      prev = cur;
    }
  }
  int i = 1;
  while (next[i] == i+1) i++;
  cout << links-(i-1)+N-i << endl;
  return 0;
}
