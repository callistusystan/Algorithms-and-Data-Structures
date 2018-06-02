#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int lcm(int a, int b) {
  return a*b/__gcd(a,b);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    A[i]--;
  }
  int id = 0;
  vi group(N, -1);
  for (int i=0;i<N;i++) {
    int cur = i;
    if (group[cur] != -1) continue;
    while (group[cur] == -1) {
      group[cur] = id;
      cur = A[cur];
    }
    if (cur != i) {
      cout << "-1\n";
      return 0;
    }
    id++;
  }
  map<int, int> cnt;
  for (int i=0;i<N;i++) cnt[group[i]]++;
  int ans = 1;
  for (auto p : cnt) {
    if (p.second%2) ans = lcm(ans, p.second);
    else ans = lcm(ans, p.second/2);
  }
  cout << ans << endl;
  return 0;
}
