#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  ll sum = 0;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    sum += ai;
  }
  if (sum%N) cout << N-1 << endl;
  else cout << N << endl;
  return 0;
}
