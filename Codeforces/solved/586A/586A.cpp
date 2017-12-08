#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N+20);
  for (int i=0;i<N;i++) cin >> A[i];

  int ans = 0;
  int i = 0;
  while (i < N) {
    int left, right;
    left = right = i;
    while (left < N && A[left] != 1) left++;
    if (A[left] != 1) break;
    while (right < N && !(A[right] && !A[right+1] && !A[right+2])) right++;
    ans += right-left+1;

    i = right+1;
  }
  cout << ans << endl;

  return 0;
}
