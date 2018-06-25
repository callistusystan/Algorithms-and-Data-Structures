#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  
  int N, K; cin >> N >> K;
  vi A(N); int negs = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    negs += A[i] < 0;
  }
  sort(A.begin(), A.end());
  if (negs >= K) {
    for (int i=0;i<K;i++) A[i] *= -1;
  } else {
    for (int i=0;i<negs;i++) A[i] *= -1;
    int i0 = -1;
    for (int i=0;i<N;i++) if (A[i] == 0) i0 = i;
    if (i0 == -1 && (K-negs)%2) {
      int mn = min_element(A.begin(), A.end()) - A.begin();
      A[mn] *= -1;
    }    
  }
  cout << accumulate(A.begin(), A.end(), 0) << endl;
  return 0;
}