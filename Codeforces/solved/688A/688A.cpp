#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, D; cin >> N >> D;
  int d = 0, best =0;
  for (int i=0;i<D;i++) {
    string S; cin >> S;
    bool allPresent = true;
    for (int j=0;j<N;j++) {
      if (S[j] == '0') allPresent = false;
    }

    if (allPresent) {
      best = max(best, d);
      d = 0;
    } else {
      d++;
    }
  }
  if (d) best = max(best, d);

  cout << best << endl;

  return 0;
}
