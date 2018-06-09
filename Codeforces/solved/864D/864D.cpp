#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N), cnt(N+1), isDup(N+1);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    cnt[A[i]] += 1;
    isDup[A[i]] |= cnt[A[i]] > 1;
  }
  // find missing
  vi missing;
  for (int i=1;i<=N;i++) if (!cnt[i]) missing.push_back(i);
  sort(missing.begin(), missing.end());
  int M = missing.size(), j = 0;
  cout << M << endl;
  vi placed(N+1);
  for (int i=0;i<N;i++) {
    if (isDup[A[i]]) {
      // if placed, swap with missing
      if (placed[A[i]]) cout << missing[j++] << " ";
      else {
        // not placed
        if (cnt[A[i]] == 1 || A[i] < missing[j]) {
          cout << A[i] << " ";
          placed[A[i]] = 1;
        } else cout << missing[j++] << " ";
      }
      cnt[A[i]]--;
    } else cout << A[i] << " ";
  }
  cout << endl;
  return 0;
}
