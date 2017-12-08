#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi cnt(1e6+5), left(1e6+5, -1), right(1e6+5);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    cnt[ai]++;
    if (left[ai] == -1) left[ai] = i+1;
    right[ai] = i+1;
  }
  int x = *max_element(cnt.begin(), cnt.end());
  pii best = {1, N};
  for (int i=0;i<1e6+5;i++) {
    if (cnt[i] == x) {
      if (right[i]-left[i] < best.second-best.first) {
        best = {left[i], right[i]};
      }
    }
  }
  cout << best.first << " " << best.second << endl;
  return 0;
}
