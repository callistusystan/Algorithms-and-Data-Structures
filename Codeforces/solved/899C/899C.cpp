#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;
  if (N%4 == 3 || N%4 == 0) cout << "0\n";
  else cout << "1\n";
  vi ans;
  while (N >= 4) {
    ans.push_back(N);
    ans.push_back(N-3);
    N -= 4;
  }
  if (N%4 >= 2) ans.push_back(N%4);
  cout << ans.size() << " ";
  for (int i : ans) cout << i << " ";
  cout << endl;
  return 0;
}
