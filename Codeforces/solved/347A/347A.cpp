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
  int mxi = max_element(A.begin(), A.end()) - A.begin();
  swap(A[0], A[mxi]);
  int mni = min_element(A.begin()+1, A.end()) - A.begin();
  swap(A[N-1], A[mni]);
  sort(A.begin()+1, A.end()-1);
  for (int i=0;i<N;i++) cout << A[i] << " ";
  cout << endl;
  return 0;
}
