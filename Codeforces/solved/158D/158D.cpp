#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
vi A(20005);

int check(int x) {
  int skip = N/x;
  vi sums(skip);
  for (int i=0;i<N;i++) {
    sums[i%skip] += A[i];
  }
  return *max_element(sums.begin(), sums.end());
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  int ans = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    ans += A[i];
  }
  vi factors;
  for (int i=2;i*i<=N;i++) {
    if (N%i) continue;
    factors.push_back(i);
    if (N/i != i) factors.push_back(N/i);
  }
  for (int fac : factors) {
    if (fac < 3) continue;
    ans = max(ans, check(fac));
  }
  cout << ans << endl;
  return 0;
}
