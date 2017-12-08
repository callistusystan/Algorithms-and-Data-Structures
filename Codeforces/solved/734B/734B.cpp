#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int K2,K3,K5,K6; cin >> K2 >> K3 >> K5 >> K6;

  ll sum = 0;
  while (K2 && K5 && K6) {
    K2--;K5--;K6--;
    sum+=256;
  }

  while (K2 && K3) {
    K2--;K3--;
    sum += 32;
  }

  cout << sum << endl;

  return 0;
}
