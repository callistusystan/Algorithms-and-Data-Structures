#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  int lo,hi,i;
  lo = 1; hi = 10; i = 1;
  while (hi <= N) {
    

    i++;
    lo*=10;
    hi*=10;
  }

  return 0;
}
