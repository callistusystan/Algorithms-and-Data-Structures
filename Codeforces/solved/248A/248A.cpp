#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int a,b;
  a = b = 0;
  for (int i=0;i<N;i++) {
    int l, r; cin >> l >> r;
    a += l;
    b += r;
  }
  cout << min(a, N-a) + min(b, N-b) << endl;
  return 0;
}
