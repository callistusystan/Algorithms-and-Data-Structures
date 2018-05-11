#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int K,N,S,P; cin >> K >> N >> S >> P;
  int sheets = (N+S-1)/S;
  cout << (K*sheets+P-1)/P << endl;
  return 0;
}
