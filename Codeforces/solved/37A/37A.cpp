#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi heights(1005, 0);

  int B = 0;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (heights[ai] == 0) {
      B++;
    }
    heights[ai]++;
  }

  cout << *max_element(heights.begin(), heights.end()) << " " << B << endl;

  return 0;
}
