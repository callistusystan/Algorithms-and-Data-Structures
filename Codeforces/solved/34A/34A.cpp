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
  A.push_back(A[0]);
  int j = 0;
  for (int i=0;i<N;i++) {
    if (abs(A[i]-A[i+1]) < abs(A[j]-A[j+1])) j = i;
  }
  cout << (j%N)+1 << " " << ((j+1)%N)+1 << endl;
  return 0;
}
