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

  vi pos(N+1,-1);
  for (int i=0;i<N;i++) pos[A[i]] = i;

  int M; cin >> M;
  ll vas = 0, pet = 0;
  while (M--) {
    int qi; cin >> qi;
    vas += pos[qi]+1;
    pet += N-pos[qi];
  }
  cout << vas << " " << pet << endl;
  return 0;
}
