#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K, M; cin >> N >> K >> M;
  vi A(N);
  map<int, vi> B;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    B[A[i]%M].push_back(A[i]);
    if ((int)B[A[i]%M].size() == K) {
      cout << "Yes\n";
      for (int num : B[A[i]%M]) cout << num << " ";
      cout << endl;
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}
