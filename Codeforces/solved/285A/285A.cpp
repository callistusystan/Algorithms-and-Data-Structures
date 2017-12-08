#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  for (int i=1;i<N-K;i++) {
    cout << i << " ";
  }
  for (int i=N;i>=N-K;i--) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
