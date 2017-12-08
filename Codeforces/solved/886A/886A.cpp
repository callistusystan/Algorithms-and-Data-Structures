#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi A(6); int sum = 0;
  for (int i=0;i<6;i++) {
    cin >> A[i]; sum += A[i];
  }
  for (int i=0;i<4;i++) {
    for (int j=i+1;j<5;j++) {
      for (int k=j+1;k<6;k++) {
        int cur = A[i]+A[j]+A[k];
        if (2*cur == sum) {
          cout << "YES\n";
          return 0;
        }
      }
    }
  }
  cout << "NO\n";
  return 0;
}
