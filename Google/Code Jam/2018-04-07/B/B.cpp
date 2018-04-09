#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve(int N, vi &A) {
  vi B = A;
  sort(B.begin(), B.end());
  map<int, vector<vi>> dest;
  for (int i=0;i<N;i++) {
    if (!dest.count(B[i])) dest[B[i]].resize(2);
    dest[B[i]][i%2].push_back(i);
  }
  vector<bool> correct(N);
  for (int i=0;i<N;i++) {
    if (!dest[A[i]][i%2].empty()) {
      correct[dest[A[i]][i%2].back()] = true;
      dest[A[i]][i%2].pop_back();
    }
  }
  for (int i=0;i<N;i++) {
    if (!correct[i]) {
      cout << i << endl;
      return;
    }
  }
  cout << "OK\n";
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  for (int i=1;i<=T;i++) {
    cout << "Case #" << i << ": ";
    int N; cin >> N;
    vi A(N); for (int i=0;i<N;i++) cin >> A[i];
    solve(N, A);
  }
  return 0;
}
