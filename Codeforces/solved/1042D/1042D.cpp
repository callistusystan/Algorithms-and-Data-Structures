#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N; ll T; 
vector<ll> tree(2e5+5);

ll sum(int k) {
  int sum = 0;
  while (k >= 1) {
    sum += tree[k];
    k -= k&-k;
  }
  return sum;
}

void add(int k, ll x) {
  while (k <= N) {
    tree[k] += x;
    k += k&-k;
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> T;
  vi A(N);
  vector<ll> psum(N);
  map<ll, int> sums;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    psum[i] = A[i];
    if (i) psum[i] += psum[i-1];
    sums[psum[i]]++;
  } 
  map<ll, int> idx;
  int i = 1;
  for (auto p : sums) {
    idx[p.first] = i;
    add(i, p.second);
    i++;
  }
  ll ans = 0;
  for (int i=0;i<N;i++) {
    auto it = idx.lower_bound(T + (i ? psum[i-1] : 0));
    if (it != idx.begin()) {
      it--;
      ans += sum(it->second);
    }
    add(idx[psum[i]], -1);
  }    
  cout << ans << endl;
  return 0;
}
