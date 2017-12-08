#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;
  cout << (((1LL << N)- 1LL) << 1LL) << endl;

  return 0;
}
