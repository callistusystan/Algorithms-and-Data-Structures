#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;

  vi nums;
  int L = 0;
  for (int i=0;i<N;i++) {
    if (S[i] == 'W') {
      if (L) {
        nums.push_back(L);
        L = 0;
      }
    } else {
      L++;
    }
  }
  if (L) {
    nums.push_back(L);
  }

  cout << nums.size() << endl;

  if (nums.size()) {
    for (int i=0;i<(int)nums.size();i++) {
      cout << nums[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
