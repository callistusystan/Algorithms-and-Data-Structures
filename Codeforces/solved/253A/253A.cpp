#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int N, M; cin >> N >> M;
  if (N >= M) {
    for (int i=0;i<min(N,M);i++) cout << "BG";
    for (int i=0;i<N-min(N,M);i++) cout << "B";
  } else {
    for (int i=0;i<min(N,M);i++) cout << "GB";
    for (int i=0;i<M-min(N,M);i++) cout << "G";
  }
  cout << endl;
  return 0;
}
