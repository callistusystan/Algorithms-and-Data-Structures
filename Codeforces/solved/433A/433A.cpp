#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(2);
  int sum = 0;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    sum += ai;
    A[ai/100 -1]++;
  }
  if (sum%2 == 0)  {
    int target = sum/2;
    for (int i=0;i<=A[0];i++) {
      if ((target-i*100)%200) continue;
      int need = (target-i*100)/200;
      if (need <= A[1]) {
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";
  return 0;
}
