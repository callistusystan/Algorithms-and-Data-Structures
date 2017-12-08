#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for(int i=0;i<N;i++) cin >> A[i];

  for (int i=0;i<N;i++) {
    auto it = min_element(A.begin()+i, A.end());
    int j = it - A.begin();
    while (j > i) {
      cout << j << " " << j+1 << endl;
      swap(A[j-1], A[j]);
      j--;
    }
  }
  return 0;
}
