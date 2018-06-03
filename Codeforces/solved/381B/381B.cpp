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
  vi ans;
  for (int i=0;i<N;i++)
    if (ans.empty() || A[i] != ans.back()) {
      ans.push_back(A[i]);
      A[i] = -1;
    }
  for (int i=N-1;i>=0;i--)
    if (A[i] != -1 && A[i] < ans.back()) ans.push_back(A[i]);
  cout << ans.size() << endl;
  N = ans.size();
  for (int i=0;i<N;i++) cout << ans[i] << " \n"[i==N-1];
  return 0;
}
