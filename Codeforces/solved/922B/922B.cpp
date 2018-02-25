#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool can(int a, int b, int c) {
  return (a+b > c && b+c > a && c+a > b);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int ans = 0;
  for (int a=1;a<=N;a++) {
    for (int b=a;b<=N;b++) {
      int c = a^b;
      if (b <= c && c <= N && can(a,b,c)) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
