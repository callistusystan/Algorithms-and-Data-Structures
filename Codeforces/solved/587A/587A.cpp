#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi A(3e6);
  int N; cin >> N;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    A[ai]++;
  }
  int ans = 0;
  for (int i=0;i<3e6;i++) {
    A[i+1] += A[i]/2;
    ans += A[i]%2;
  }
  cout << ans << endl;
  return 0;
}
