#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<ll> A(50);
  A[0] = 0; A[1] = 1;
  for (int i=2;i<45;i++) {
    A[i] = A[i-2] + A[i-1];
  }

  ll N; cin >> N;
  for (int i=0;i<45;i++) {
    for (int j=i;j<45;j++) {
      for (int k=j;k<45;k++) {
        if (A[i] + A[j] + A[k] == N) {
          cout << A[i] << " " << A[j] << " " << A[k] << endl;
          return 0;
        }
      }
    }
  }

  cout << "I'm too stupid to solve this problem" << endl;
  return 0;
}
