#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi A, B;
int last;

int solve() {
  ll sumA, sumB;
  sumA = sumB = 0;
  for (int cur : A) sumA += cur;
  for (int cur : B) sumB += cur;
  if (sumA > sumB) return 1;
  else if (sumB > sumA) return 2;
  else {
    for (int i=0;i<(int)min(A.size(), B.size());i++) {
      if (A[i] > B[i]) return 1;
      else if (B[i] > A[i]) return 2;
    }
  }
  if (A.size() > B.size()) return 1;
  else if (B.size() > A.size()) return 2;
  return last;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (ai > 0) A.push_back(ai), last = 1;
    else B.push_back(abs(ai)), last = 2;
  }

  if (solve() == 1) cout << "first";
  else cout << "second";
  cout << endl;
  return 0;
}
