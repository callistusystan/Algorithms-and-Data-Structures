#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi cnt(3);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    cnt[i%3] += ai;
  }

  int best = max_element(cnt.begin(), cnt.end()) - cnt.begin();
  if (best == 0) cout << "chest";
  else if (best == 1) cout << "biceps";
  else cout << "back";
  cout << endl;

  return 0;
}
