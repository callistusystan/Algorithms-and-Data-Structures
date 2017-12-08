#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M, K; cin >> M >> N >> K;
  K--;

  int i,j;
  j = (K/(2*N))+1;
  K %= 2*N;
  i = K/2 + 1;

  char c = ((K%2) ? 'R' : 'L');

  cout << j << " " << i << " " << c << endl;
  return 0;
}
