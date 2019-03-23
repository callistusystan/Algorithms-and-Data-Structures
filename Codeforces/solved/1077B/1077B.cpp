#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N), disturbed;
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=1;i+1<N;i++) if (A[i-1] == 1 && A[i] == 0 && A[i+1] == 1) disturbed.push_back(i);
  int M = disturbed.size(), i = 0, ans = 0;
  while (i < M) {
    ans++;
    if (i+1 < M && disturbed[i+1] == disturbed[i]+2) i += 2;
    else i++;
  }
  cout << ans << endl;
  return 0;
}
