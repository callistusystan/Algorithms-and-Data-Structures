#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int lo = 0, hi = 1e9+1;
  while (lo != hi-1) {
    int mid = (lo+hi)/2;
    if (N/mid <= 1) hi = mid;
    else lo = mid;
  }
  cout << hi << endl;
  return 0;
}
