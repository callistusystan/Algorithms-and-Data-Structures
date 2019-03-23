#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  cout << (N*2+K-1)/K + (N*5+K-1)/K + (N*8+K-1)/K << endl;
  return 0;
}
