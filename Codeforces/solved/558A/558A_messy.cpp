#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, ll> pil;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pil> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i].first >> A[i].second;
  }
  A.push_back({0, 0LL});
  sort(A.begin(), A.end());

  int start = lower_bound(A.begin(), A.end(), make_pair(0, 0LL)) - A.begin();

  ll res1, res2;
  res1 = res2 = 0;

  int i,j,d;
  i = j = start;
  d = 1;
  // try right
  while (1) {
    if (d) {
      j++;
    } else {
      i--;
    }
    if (i < 0 || j > N) break;
    if (d) res1 += A[j].second;
    else res1 += A[i].second;
    d = 1-d;
  }

  i = j = start;
  d = 0;
  // try left
  while (1) {
    if (d) {
      j++;
    } else {
      i--;
    }
    if (i < 0 || j > N) break;
    if (d) res2 += A[j].second;
    else res2 += A[i].second;
    d = 1-d;
  }


  cout << max(res1, res2) << endl;
  return 0;
}
