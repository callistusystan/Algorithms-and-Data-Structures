#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool f(pii a, pii b) {
  if (a.first != b.first) return a.first > b.first;
  return a.second < b.second;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vector<pii> A(N);
  for (int i=0;i<N;i++) cin >> A[i].first >> A[i].second;
  sort(A.begin(), A.end(), f);
  auto p = equal_range(A.begin(), A.end(), A[K-1], f);
  int ans = p.second-p.first;
  cout << ans << endl;
  return 0;
}
