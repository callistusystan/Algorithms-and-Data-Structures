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
  if (A[N-1] == 1) A[N-1] = 2;
  else A[N-1] = 1;
  sort(A.begin(), A.end());
  for (int i=0;i<N;i++) cout << A[i] << " \n"[i==N-1];
  return 0;
}
