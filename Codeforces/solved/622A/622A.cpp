#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;
  ll i = 1;
  while (N > i) {
    N -= i;
    i++;
  }
  cout << N << endl;
  return 0;
}
