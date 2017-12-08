#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<string> A(4);
  for (int i=0;i<4;i++) {
    cin >> A[i];
    A[i] = A[i].substr(2);
  }
  vi B;
  for (int i=0;i<4;i++) {
    bool flag1 = true, flag2 = true;
    for (int j=0;j<4;j++) {
      if (i == j) continue;
      if (A[i].size() < A[j].size()*2) flag1 = false;
    }
    for (int j=0;j<4;j++) {
      if (i == j) continue;
      if (A[i].size()*2 > A[j].size()) flag2 = false;
    }
    if (flag1 || flag2) B.push_back(i);
  }
  if (B.size() == 1) cout << (char)('A'+B[0]) << endl;
  else cout << "C\n";
  return 0;
}
