#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int O,B,C; cin >> O >> B >> C;
  int N; cin >> N;
  vi A(N+1);
  for (int i=1;i<=N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  auto l = upper_bound(A.begin(), A.end(), B);
  auto r = lower_bound(A.begin(), A.end(), C);
  cout << r-l << endl;
  return 0;
}
