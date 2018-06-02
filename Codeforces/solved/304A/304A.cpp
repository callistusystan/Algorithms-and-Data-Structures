#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int ans = 0;
  for (int a=1;a<=N;a++) {
    for (int b=a;b<=N;b++) {
      int lhs = a*a + b*b;
      int c = sqrt(lhs);
      while (c*c < lhs) c++;
      while (c*c > lhs) c--;
      if (b <= c && c <= N && c*c == lhs) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
