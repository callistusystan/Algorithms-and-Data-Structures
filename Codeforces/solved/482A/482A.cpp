#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  int p1 = 1, p2 = N;

  for (int i=0;i<K;i++) {
    if (i%2) {
      cout << p2 << " ";
      p2--;
    } else {
      cout << p1 << " ";
      p1++;
    }
  }
  if (K%2) {
    for (int i=p1;i<=p2;i++) {
      cout << i << " ";
    }
  } else {
    for (int i=p2;i>=p1;i--) {
      cout << i << " ";
    }
  }
  cout << endl;
  return 0;
}
