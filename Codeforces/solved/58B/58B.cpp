#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int M = N;
  vi divisors;
  for (int i=2;i*i<=M;i++) {
    while (M%i == 0) {
      divisors.push_back(i);
      M /= i;
    }
  }
  if (M > 1) divisors.push_back(M);
  for (int i : divisors) {
    cout << N << " ";
    N /= i;
  }
  cout << "1\n";
  return 0;
}
