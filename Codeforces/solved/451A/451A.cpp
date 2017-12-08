#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;

  N = min(N, M);

  if (N%2) cout << "Akshat";
  else cout << "Malvika";
  cout << endl;


  return 0;
}
