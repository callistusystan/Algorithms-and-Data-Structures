#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(2);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    A[ai/100 -1]++;
  }
  for (int i=0;i<=A[0];i++) {
    for (int j=0;j<=A[1];j++) {
      if (i+j*2 == A[0]-i+(A[1]-j)*2) {
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";
  return 0;
}
