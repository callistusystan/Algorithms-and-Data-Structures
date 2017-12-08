#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S1, S2; cin >> S1 >> S2;
  int N = S1.size();

  for (int i=0;i<N;i++) {
    if (S1[i] == S2[i]) cout << 0;
    else cout << 1;
  }
  cout << endl;

  return 0;
}
