#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  vi isGood(10);
  while (M--) {
    int x; cin >> x;
    isGood[x] = 1;
  }
  for (int num : A) if (isGood[num]) cout << num << " ";
  cout << endl;
  return 0;
}
