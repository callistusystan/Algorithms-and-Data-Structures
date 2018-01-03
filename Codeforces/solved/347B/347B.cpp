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
  int orig = 0;
  for (int i=0;i<N;i++) if (A[i] == i) orig++;
  int ans = orig;
  for (int i=0;i<N;i++)
    if (A[i] != i) {
      if (A[A[i]] == i) {
        ans = orig+2;
      } else ans = max(ans, orig+1);
    }
  cout << ans << endl;
  return 0;
}
