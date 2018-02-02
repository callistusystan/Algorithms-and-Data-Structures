#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi ps(1e6+5);

bool isPS(int a) {
  if (a < 0) return false;
  return ps[a];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<=1e3;i++) {
    ps[i*i] = 1;
  }
  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int best = 0;
  while (best < N && isPS(A[best])) best++;
  for (int i=best+1;i<N;i++) {
    if (!isPS(A[i]) && A[i] > A[best]) best = i;
  }
  cout << A[best] << endl;
  return 0;
}
