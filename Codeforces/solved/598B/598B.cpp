#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int mod(int a, int b) {
  return ((a%b)+b)%b;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size(), M; cin >> M;
  vi tmp(N);
  while (M--) {
    int l,r,k; cin >> l >> r >> k;
    l--; r--;
    for (int i=l;i<=r;i++) tmp[i-l] = S[l+mod((i-l)-k, r-l+1)];
    for (int i=0;i<r-l+1;i++) S[i+l] = tmp[i];
  }
  cout << S << endl;
  return 0;
}
