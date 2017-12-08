#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  int start = 1;
  for (int i=0;i<N;i++) {
    for (int j=0;j<N/2;j++) {
      if (j) cout << " ";
      cout << start << " " << N*N -start + 1;
      start++;
    }
    cout << endl;
  }

  return 0;
}
