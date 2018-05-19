#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  ll sum = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    sum += A[i];
  }
  if (sum%2 == 0) {
    multiset<ll> left, right;
    for (int i=0;i<N;i++) right.insert(A[i]);
    ll sumLeft = 0;
    for (int i=0;i<N;i++) {
      sumLeft += A[i];
      ll sumRight = sum - sumLeft;
      left.insert(A[i]);
      right.erase(right.find(A[i]));
      if (sumLeft == sumRight) {
        cout << "YES\n";
        return 0;
      } else if (sumLeft < sumRight && (sumRight-sumLeft)%2 == 0) {
        if (right.count((sumRight-sumLeft)/2)) {
          cout << "YES\n";
          return 0;
        }
      } else if (sumRight < sumLeft && (sumLeft-sumRight)%2 == 0) {
        if (left.count((sumLeft-sumRight)/2)) {
          cout << "YES\n";
          return 0;
        }
      }
    }
  }
  cout << "NO\n";
  return 0;
}
