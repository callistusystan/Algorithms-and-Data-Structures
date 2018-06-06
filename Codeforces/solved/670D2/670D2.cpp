#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N; 
vi A(1e5+5), B(1e5+5);

bool f(int x, int K) {
  for (int i=0;i<N;i++) {
    ll need = (ll)x*A[i];
    if (need > B[i]) {
      if (K >= need-B[i]) K -= need-B[i];
      else return false;
    }
  }
  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int K; cin >> N >> K;
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++) cin >> B[i];
  int lo = -1, hi = 2e9+5;
  while (lo != hi-1) {
    int mid = ((ll)lo+hi)/2;
    if (f(mid, K)) lo = mid;
    else hi = mid;
  }
  cout << lo << endl;
  return 0;
}
