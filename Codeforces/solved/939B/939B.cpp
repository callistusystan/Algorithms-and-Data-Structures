#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; int K; cin >> N >> K;
  vector<ll> A(K);
  for (int i=0;i<K;i++) cin >> A[i];
  pair<ll, ll> ans = {-1, 0};
  for (int i=0;i<K;i++) {
    ll ni = N/A[i];
    if (ans.first == -1 || (double)ni/A[ans.first] > (double)ans.second/A[i]) {
      ans.first = i;
      ans.second = ni;
    }
  }
  cout << ans.first+1 << " " << ans.second << endl;
  return 0;
}
