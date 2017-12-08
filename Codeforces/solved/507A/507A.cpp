#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K; cin >> N >> K;
  vector<pii> A(N);

  for (int i=0;i<N;i++) {
    cin >> A[i].first;
    A[i].second = i+1;
  }

  sort(A.begin(), A.end());

  int ans = 0;
  vi inst;
  for (int i=0;i<N;i++) {
    if (A[i].first <= K) {
      inst.push_back(A[i].second);
      ans++;
      K -= A[i].first;
    } else {
      break;
    }
  }

  cout << ans << endl;
  for (int i=0;i<ans;i++) {
    cout << inst[i] << " \n"[i==ans-1];
  }

  return 0;
}
