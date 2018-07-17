#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(2*N);
  for (int i=0;i<2*N;i++) cin >> A[i];
  int ans = 0;
  for (int i=0;i<2*N;i+=2) {
    int j=i+1;
    while (j<2*N && A[j] != A[i]) j++;
    while (j > i+1) {
      swap(A[j], A[j-1]);
      ans++;
      j--;
    }
  }
  cout << ans << endl;
  return 0;
}