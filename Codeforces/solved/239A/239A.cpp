#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int Y,K,N; cin >> Y >> K >> N;
  vi ans;
  int cur = ((-Y)%K) + K;
  while (cur <= N - Y) {
    ans.push_back(cur);
    cur += K;
  }
  if (ans.size()) {
    for (int i : ans) cout << i << " ";
  } else cout << -1;
  cout << endl;
  return 0;
}
