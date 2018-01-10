#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int first = N, K = 1;
  while (first >= 10) {
    first /= 10;
    K *= 10;
  }
  int nxt = (first+1)*K;
  cout << nxt - N << endl;
  return 0;
}
