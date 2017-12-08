#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;

  int biggest=-1, last;
  for (int i=1;i<=N;i++) {
    int ai; cin >> ai;
    if ((ai+M-1)/M >= biggest) {
      biggest = (ai+M-1)/M;
      last = i;
    }
  }

  cout << last << endl;

  return 0;
}
