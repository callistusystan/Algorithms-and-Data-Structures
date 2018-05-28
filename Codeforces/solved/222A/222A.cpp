#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  K--;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int same = 0;
  while (same < N && A[N-1-same] == A[N-1]) same++;
  if (same >= N-K) cout << N-same << endl;
  else cout << "-1\n";
  return 0;
}
