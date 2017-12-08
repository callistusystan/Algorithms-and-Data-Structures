#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  set<int> S;
  vi cnt(N + 5);

  for (int i=N-1;i>=0;i--) {
    cnt[i] = cnt[i+1];
    if (!S.count(A[i])) {
      S.insert(A[i]);
      cnt[i]++;
    }
  }

  for (int i=0;i<M;i++) {
    int li; cin >> li;
    li--;
    cout << cnt[li] << endl;
  }

  return 0;
}
