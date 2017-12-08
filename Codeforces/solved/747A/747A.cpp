#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int best = N-1, a = 1;
  for (int i=1;i<=N;i++) {
    if (N%i) continue;
    int b = N/i;
    if (i <= b && b-i < best) {
      best = b-i;
      a = i;
    }
  }
  cout << a << " " << N/a << endl;
  return 0;
}
