#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  int i,j; i=0; j=N-1;

  int cur = 0;
  vi score(2);
  while (i <= j) {
    if (A[i] > A[j]) {
      score[cur] += A[i];
      i++;
    } else {
      score[cur] += A[j];
      j--;
    }

    cur = 1-cur;
  }

  cout << score[0] << " " << score[1] << endl;

  return 0;
}
