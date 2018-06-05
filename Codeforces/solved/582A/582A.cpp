#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  multiset<int> nums;
  for (int i=0;i<N*N;i++) {
    int ai; cin >> ai;
    nums.insert(ai);
  }
  vi A(N);
  for (int i=0;i<N;i++) {
    auto last = nums.end();
    last--;
    A[i] = *last;
    nums.erase(last);
    for (int j=0;j<i;j++) {
      nums.erase(nums.find(__gcd(A[i], A[j])));
      nums.erase(nums.find(__gcd(A[i], A[j])));
    }
  }
  for (int i=0;i<N;i++) cout << A[i] << " ";
  cout << endl;
  return 0;
}
