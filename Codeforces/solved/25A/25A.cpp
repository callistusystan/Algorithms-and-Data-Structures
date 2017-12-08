#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  vi nums(N);

  int lastOdd, lastEven;
  int nOdd, nEven;
  nOdd = nEven = 0;

  for (int i=0;i<N;i++) {
    cin >> nums[i];
    if (nums[i]%2) {
      nOdd++;
      lastOdd = i+1;
    } else {
      nEven++;
      lastEven = i+1;
    }
  }

  if (nOdd == 1) cout << lastOdd;
  else cout << lastEven;
  cout << endl;

  return 0;
}
