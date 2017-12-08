#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;

  if (N%2) {
    cout << -(N+1)/2 << endl;
  } else {
    cout << N/2 << endl;
  }

  return 0;
}
