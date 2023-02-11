#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    if ((N/2)%2) cout << "NO\n";
    else {
      cout << "YES\n";
      // 2, 4, 6, 8
      int n = N/2;
      int sum_even = 0;
      for (int i=0;i<n;i++) {
        int x = 2*(i+1);
        cout << x << " ";
        sum_even += x;
      }
      int sum_odd = 0;
      for (int i=0;i+1<n;i++) {
        int x = 2*(i+1)-1;
        cout << x << " ";
        sum_odd += x;
      }
      cout << sum_even - sum_odd << endl;
    }
  }
  return 0;
}
