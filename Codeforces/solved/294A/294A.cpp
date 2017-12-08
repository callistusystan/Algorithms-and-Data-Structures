#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int M; cin >> M;
  for (int i=0;i<M;i++) {
    int x,y; cin >> x >> y;
    x--; y--;
    if (x > 0) A[x-1] += y;
    if (x < N-1) A[x+1] += A[x]-y-1;
    A[x] = 0;
  }
  for (int i=0;i<N;i++) cout << A[i] << endl;
  return 0;
}
