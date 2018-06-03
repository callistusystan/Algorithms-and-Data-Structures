#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int count5(int x) {
  int ans = 0;
  while (x%5 ==0) {
    ans++;
    x /= 5;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int M; cin >> M;
  int cur = 0, i=1;
  vi ans;
  while (cur <= M) {
    cur += count5(i);
    if (cur == M) ans.push_back(i);
    i++;    
  }
  cout << ans.size() << endl;
  if (ans.size()) {
    for (int i : ans) cout << i << " ";
    cout << endl; 
  }
  return 0;
}
