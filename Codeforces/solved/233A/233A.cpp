#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  if (N%2) cout << -1;
  else {
    for (int i=1;i<N;i+=2) {
      cout << i+1 << " " << i << " ";
    }
  }
  cout << endl;

  return 0;
}
