#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi D(N);
  for (int i=0;i<N;i++) cin >> D[i];

  int A,B; cin >> A >> B;
  A--; B--;
  int res1 = 0, res2 = 0;

  int pos = A;
  while (pos != B) {
    res1 += D[pos];
    pos = (pos+1)%N;
  }

  pos = B;
  while (pos != A) {
    res2 += D[pos];
    pos = (pos+1)%N;
  }

  cout << min(res1, res2) << endl;
  return 0;
}
