#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  cout << 'a';
  for (int i=0;i<N-1;i++) {
    if ((i/2)%2) cout << 'a';
    else cout << 'b';
  }

  cout << endl;

  return 0;
}
