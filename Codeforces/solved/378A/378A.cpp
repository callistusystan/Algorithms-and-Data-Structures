#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A,B; cin >> A >> B;
  int a1,a2,a3;
  a1=a2=a3=0;
  for (int i=1;i<=6;i++) {
    if (abs(A-i) < abs(B-i)) a1++;
    else if (abs(A-i) == abs(B-i))a2++;
    else a3++;
  }
  cout << a1 << " " << a2 << " " << a3 << endl;

  return 0;
}
