#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,A,B; cin >> N >> A >> B;

  A--;
  A += B;
  A %= N;
  if (A <0) A += N;

  cout << A+1 << endl;

  return 0;
}
