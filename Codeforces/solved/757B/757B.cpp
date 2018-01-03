#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi cnt(1e5+5);
  while (N--) {
    int ai; cin >> ai;
    for (int i=2;i*i<=ai;i++) {
      if (ai%i == 0) {
        cnt[i]++;
        while (ai%i == 0) ai /= i;
      }
    }
    if (ai > 1) cnt[ai]++;
  }
  cout << max(1, *max_element(cnt.begin(), cnt.end())) << endl;
  return 0;
}
