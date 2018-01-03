#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N), cnt(1e5+5);
  for (int i=0;i<N;i++) {
    cin >> A[i]; cnt[A[i]]++;
  }
  int cur = 1;
  while (cnt[cur]) cur++;
  for (int i=0;i<N;i++) {
    if (A[i] > N || cnt[A[i]] > 1) {
      cnt[A[i]]--;
      A[i] = cur;
      cnt[cur]++;
      while (cnt[cur]) cur++;
    }
    cout << A[i] << " ";
  }
  cout << endl;
  return 0;
}
