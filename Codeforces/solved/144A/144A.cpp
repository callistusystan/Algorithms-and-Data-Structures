#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi heights(N);

  int maxI, minI; maxI = minI = 0;
  for (int i=0;i<N;i++) {
    cin >> heights[i];

    if (heights[i] > heights[maxI]) maxI = i;
    if (heights[i] <= heights[minI]) minI = i;
  }

  int ans = maxI + N - 1 -minI;
  if (maxI > minI) ans--;

  cout << ans << endl;

  return 0;
}
