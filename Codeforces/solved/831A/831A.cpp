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

  int pos1, pos2;
  pos1 = 0; pos2 = N-1;
  while (pos1 + 1 < N && A[pos1] < A[pos1+1]) pos1++;
  while (pos2 - 1 >= 0 && A[pos2-1] > A[pos2]) pos2--;

  bool can = true;
  for (int i=pos1;i<pos2;i++) {
    if (A[i] != A[i+1]) can = false;
  }

  if (can) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
