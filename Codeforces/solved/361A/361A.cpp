#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, K;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> K;
  vi A(N);
  for (int i=0;i<(N%2 ? N : N-1);i++) {
    if (i%2) A[i] = -K;
    else A[i] = K;
  }
  if (N%2 == 0) A[N-1] =0;
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++)
      cout << A[(j+i)%N] << " \n"[j==N-1];
  }
  return 0;
}
