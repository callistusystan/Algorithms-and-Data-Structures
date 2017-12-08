#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  cout << N/7*2 + max(0, N%7-5) << " " << N/7*2 + min(2, N%7) << endl;

  return 0;
}
