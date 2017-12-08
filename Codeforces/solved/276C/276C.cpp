#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, Q;
vector<ll> tree(3e5);

void update(int i, int val) {
  while (i <= N) {
    tree[i] += val;
    i += (i & -i);
  }
}

ll rsq(int i) {
  ll sum = 0;
  while (i) {
    sum += tree[i];
    i -= (i & -i);
  }
  return sum;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> Q;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  while (Q--) {
    int x, y; cin >> x >> y;
    update(x, 1);
    update(y+1, -1);
  }
  vector<ll> freq(N);
  for (int i=1;i<=N;i++) {
    freq[i-1] = rsq(i);
  }
  sort(freq.begin(), freq.end());
  ll ans = 0;
  for (int i=0;i<N;i++) {
    ans += (ll)freq[i]*A[i];
  }
  cout << ans << endl;
  return 0;
}
