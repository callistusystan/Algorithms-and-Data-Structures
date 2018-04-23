#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int R1,R2,C1,C2,D1,D2;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> R1 >> R2 >> C1 >> C2 >> D1 >> D2;
  for (int a=1;a<=9;a++) {
    for (int b=1;b<=9;b++) {
      for (int c=1;c<=9;c++) {
        for (int d=1;d<=9;d++) {
          set<int> digits = { a, b, c, d };
          if (digits.size() != 4) continue;          
          if (a+b == R1 && c+d == R2 && a+c == C1 && b+d == C2 && a+d == D1 && b+c == D2) {
            cout << a << " " << b << endl;
            cout << c << " " << d << endl;
            return 0;
          }
        }
      }
    }
  }
  cout << "-1\n";
  return 0;
}
