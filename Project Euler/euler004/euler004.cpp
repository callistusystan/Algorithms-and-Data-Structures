#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool isPal(int num) {
  string S = to_string(num);
  int N = S.size();
  for (int i=0;i<N;i++) {
    if (S[i] != S[N-1-i]) return 0;
  }
  return 1;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<int> A;
  for (int i=100;i<1000;i++) {
    for (int j=i;j<1000;j++) {
      if (isPal(i*j)) A.push_back(i*j);
    }
  }

  int T; cin >> T;
  while (T--) {
    int N; cin >> N;
    int ans = 0;
    for (int a : A)
      if (a < N) ans = max(ans, a);
    cout << ans << endl;
  }
  return 0;
}
