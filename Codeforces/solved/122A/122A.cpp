#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

bool lucky(int N) {
  if (N == 0) return false;
  while (N > 0) {
    int right = N%10;
    if (!(right == 4 || right == 7)) return false;
    N /= 10;
  }

  return true;
}

bool solve() {
  int N; cin >> N;

  for (int i=1;i<=N;i++) {
    if (lucky(i) && N%i == 0) return true;
  }

  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  if (solve()) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
