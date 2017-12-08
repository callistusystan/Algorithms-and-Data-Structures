#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, K;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> K;
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      if (i == j && K%N) cout << K/N+ K%N << " \n"[j==N-1];
      else cout << K/N << " \n"[j==N-1];
    }
  }
  return 0;
}
