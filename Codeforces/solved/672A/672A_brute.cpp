#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S;

  int i = 1;
  while (S.size() < 1200) {
    S += to_string(i++);
  }

  cout << S[N-1] << endl;

  return 0;
}
