#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vector<ll> primeDivisors;
  for (int i=2;i*i<=N;i++) {
    while (N%i == 0) {
      primeDivisors.push_back(i);
      N /= i;
    }
  }
  if (N > 1) primeDivisors.push_back(N);
  if ((int)primeDivisors.size() < K) cout << "-1\n";
  else {
    while ((int)primeDivisors.size() > K) {
      primeDivisors[0] *= primeDivisors.back();
      primeDivisors.pop_back();      
    }
    for (ll x : primeDivisors) cout << x <<  " ";
    cout << endl;
  }
  return 0;
}
