#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int cost[] = {6,2,5,5,4,5,6,3,7,6};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A,B; cin >> A >> B;
  int ans = 0;
  for (int i=A;i<=B;i++) {
    for (char c : to_string(i)) {
      ans += cost[c-'0'];
    }
  }
  cout << ans << endl;
  return 0;
}
