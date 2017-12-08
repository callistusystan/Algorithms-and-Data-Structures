#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi G(N);
  for (int i=0;i<N;i++) {
    int a; cin >> a;
    a--;
    G[a] = i+1;
  }

  for (int i =0;i<N;i++) {
    cout << G[i] << " \n"[i==N-1];
  }

  return 0;
}
