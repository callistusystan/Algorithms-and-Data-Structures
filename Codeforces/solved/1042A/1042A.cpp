#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi A(N);
  multiset<int> benches;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    benches.insert(A[i]);
  }
  for (int i=0;i<M;i++) {
    auto it = benches.begin();
    int x = *it;
    benches.erase(it);
    benches.insert(x + 1);
  }
  auto it = benches.end();
  it--;
  int mn = *it, mx = *max_element(A.begin(), A.end())+M;
  cout << mn << " " << mx << endl;  
  return 0;
}
