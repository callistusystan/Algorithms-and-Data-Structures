#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  cout << max(N*N/2, N*N - N*N/2) << endl;

  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      if ((i+j)%2 == 0) cout << 'C';
      else cout << '.';
    }
    cout << endl;
  }

  return 0;
}
