#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  int ans = 0, need = 1, i = 2;
  while (N >= need) {
    N -= need;
    ans++;
    need+=i;
    i++;
  }

  cout << ans << endl;


  return 0;
}
