#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int ans = 0;
  for (int i=1;i<N;i++) {
    int employees = N-i;
    if (employees%i == 0 && employees/i > 0) ans++;
  }
  cout << ans << endl;
  return 0;
}
