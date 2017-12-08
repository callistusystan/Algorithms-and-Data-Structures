#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=1;i<=N;i++) {
    if (i > 1) cout << "that ";
    if (i%2) cout << "I hate ";
    else cout << "I love ";

  }

  cout << "it" << endl;

  return 0;
}
