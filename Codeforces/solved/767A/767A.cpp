#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N+5);
  for (int i=1;i<=N;i++) {
    int ai; cin >> ai;
    A[ai] = i;
  }
  int el = N;
  for (int i=1;i<=N;i++) {
    while (el >= 1 && i >= A[el]) {
      cout << el << " ";
      el--;
    }
    cout << endl;
  }
  return 0;
}
