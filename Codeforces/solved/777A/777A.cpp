#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int C0[] = {1,2,2,1,0,0}, C1[] = {0,0,1,2,2,1};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,X; cin >> N >> X;
  N--;

  // try 0
  if (C0[N%6] == X) {
    cout << 0 << endl;
  } else if (C1[N%6] == X) {
    cout << 1 << endl;
  } else {
    cout << 2 << endl;
  }

  return 0;
}
