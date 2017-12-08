#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  for (int i=-N/2;i<=N/2;i++) {
    for (int j=0;j<abs(i);j++) {
      cout << "*";
    }
    for (int j=0;j<N-2*abs(i);j++) {
      cout << "D";
    }
    for (int j=0;j<abs(i);j++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
