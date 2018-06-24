#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A,B,C,N; cin >> A >> B >> C >> N;
  int nRemain = N - (A+B-C);
  if (A >= C && B >= C && nRemain >= 1) cout << nRemain << endl;
  else cout << "-1\n";
  return 0;
}
