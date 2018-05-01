#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi widths(N+5), heights(N+5);
  int sum = 0;
  for (int i=1;i<=N;i++) {
    cin >> widths[i] >> heights[i];
    sum += widths[i];
  }
  vi prefixMaxHeight(N+5), suffixMaxHeight(N+5);
  for (int i=1;i<=N;i++) prefixMaxHeight[i] = max(prefixMaxHeight[i-1], heights[i]);
  for (int i=N;i>=1;i--) suffixMaxHeight[i] = max(suffixMaxHeight[i+1], heights[i]);
  for (int i=1;i<=N;i++) cout << (sum-widths[i])*max(prefixMaxHeight[i-1], suffixMaxHeight[i+1]) << " ";
  cout << endl;
  return 0;
}
