#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi A(N+5);
  for (int i=0;i<M;i++) {
    int ai; cin >> ai;
    for (int i=ai;i<=N;i++) {
      if (A[i] == 0) A[i] = ai;
    }
  }
  for (int i=1;i<=N;i++) {
    cout << A[i] << " ";
  }
  cout << endl;
  return 0;
}
