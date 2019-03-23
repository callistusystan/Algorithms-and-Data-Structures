#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  set<int> A;
  for (int i=0;i<N;i++) {
    int x; cin >> x;
    A.insert(x);
  }
  auto it = A.end();
  it--;
  int mn = *A.begin(), mx = *it;
  cout << mx-mn+1 - N << endl;
  return 0;
}
