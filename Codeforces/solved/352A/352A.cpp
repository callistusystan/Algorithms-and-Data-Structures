#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi freq(10);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    freq[ai]++;
  }

  if (!freq[0]) {
    cout << -1;
  } else {
    if (freq[5] >= 9) {
      string fives(freq[5]/9*9, '5');
      string zeroes(freq[0], '0');
      cout << fives << zeroes;
    } else {
      cout << 0;
    }
  }

  cout << endl;

  return 0;
}
