#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, M, K;
vi A(2e5+5);

bool f(int x) {
  int remain = M, cap = 0;
  for (int i=x;i<N;i++) {
    if (A[i] > cap) {
      remain--;
      cap = K;
    }
    if (remain < 0) return false;
    cap -= A[i];
  }
  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> M >> K;
  for (int i=0;i<N;i++) cin >> A[i];

  int lo = -1, hi = N;
  while (lo != hi-1) {
    int mid = (lo+hi)/2;
    if (f(mid)) hi = mid;
    else lo = mid;
  }
  cout << N-hi << endl;
  return 0;
}
