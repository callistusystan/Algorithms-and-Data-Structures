#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  vi ans(N);
  for (int i=0;i<N;i+=2) ans[i] = A[i/2];
  for (int i=1;i<N;i+=2) {
    ans[i] = A.back();
    A.pop_back();
  }
  for (int i=0;i<N;i++) cout << ans[i] << " ";
  cout << endl;
  return 0;
}
