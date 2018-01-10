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
  sort(A.begin(), A.end());
  for (int i=0;i<N-2;i++) {
    for (int j=i+1;j<N-1;j++) {
      for (int k=j+1;k<N;k++) {
        set<int> s = {A[i], A[j], A[k]};
        if (s.size() == 3 && abs(A[i]-A[j]) <= 2 && abs(A[i]-A[k]) <= 2 && abs(A[j]-A[k]) <= 2) {
          cout << "YES\n";
          return 0;
        }
      }
    }
  }
  cout << "NO\n";
  return 0;
}
