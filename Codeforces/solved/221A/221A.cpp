#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) A[i] = i+1;
  for (int i=N-1;i>0;i--) {
    swap(A[i], A[i-1]);
  }
  for (int i=0;i<N;i++) cout << A[i] << " ";
  cout << endl;
  return 0;
}
