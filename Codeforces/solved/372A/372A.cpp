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
  sort(A.begin(), A.end());
  int i=0,j=N/2;
  int groups = 0;
  while (i<N/2 && j<N) {
    if (A[i]*2 > A[j]) j++;
    else {
      groups++;
      i++; j++;
    }
  }
  cout << N-groups << endl;
  return 0;
}
