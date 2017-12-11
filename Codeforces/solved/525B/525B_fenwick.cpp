#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
vi tree(3e5+5);

void update(int i, int val) {
  while (i <= N) {
    tree[i] += val;
    i += (i & -i);
  }
}

int rsq(int i) {
  int sum = 0;
  while (i) {
    sum += tree[i];
    i -= (i & -i);
  }
  return sum;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  N = S.size();
  int M; cin >> M;
  while (M--) {
    int ai; cin >> ai;
    update(ai, 1);
    update(N-ai+2, 1);
  }
  for (int i=0;i<N;i++) {
    if (rsq(i+1)%2) cout << S[N-1-i];
    else cout << S[i];
  }
  cout << endl;
  return 0;
}
