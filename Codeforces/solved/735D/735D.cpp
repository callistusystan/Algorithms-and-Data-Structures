#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  bool isPrime = true;
  for (int i=2;i*i<=N;i++) {
    if (N%i == 0) isPrime = false;
  }
  if (isPrime) cout << 1;
  else if (N%2 == 0) cout << 2;
  else {
    bool isAlsoPrime = true;
    for (int i=2;i*i<=N-2;i++) {
      if ((N-2)%i == 0) isAlsoPrime = false;
    }
    if (isAlsoPrime) cout << 2;
    else cout << 3;
  }
  cout << endl;
  return 0;
}
