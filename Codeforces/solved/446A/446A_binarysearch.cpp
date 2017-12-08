#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N+5), starts = {0};
  int ans = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (i && A[i] <= A[i-1]) starts.push_back(i);
    ans = max(ans, i-starts.back()+1);
  }
  if (N == 1) {
    cout << "1\n";
    return 0;
  }
  starts.push_back(N);

  // try change 0
  if (A[0] >= A[1]) {
    int j = *upper_bound(starts.begin(), starts.end(), 1);
    ans = max(ans, j);
  }
  // try change N-1
  if (A[N-2] >= A[N-1]) {
    int j = starts.size()-1;
    while (j >= 0 && starts[j] >= N-1) j--;
    ans = max(ans, N-starts[j]);
  }
  for (int i=1;i<N-1;i++) {
    int j,k;
    j = upper_bound(starts.begin(), starts.end(), i) - starts.begin();
    while (j >= 0 && starts[j] >= i) j--;
    if (A[i+1] - A[i-1] >= 2) {
      k = upper_bound(starts.begin(), starts.end(), i+1) - starts.begin();
    } else {
      k = upper_bound(starts.begin(), starts.end(), i) - starts.begin();
    }
    ans = max(ans, starts[k]-starts[j]);
  }
  cout << ans << endl;
  return 0;
}
