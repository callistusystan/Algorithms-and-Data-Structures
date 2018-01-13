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
  map<int, int> S;
  int i,j,ans;
  i = ans = 0; j = 1;
  S[A[0]]++;
  while (i < N) {
    while (j < N) {
      if (S.size() == 2 && !S.count(A[j])) break;
      S[A[j]]++;
      j++;
    }
    ans = max(ans, j-i);
    S[A[i]]--;
    if (S[A[i]] == 0) S.erase(A[i]);
    i++;
  }
  cout << ans << endl;
  return 0;
}
