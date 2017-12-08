#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

string A[] = {"zero", "one", "two",	"three", "four", "five", "six",	"seven",
"eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
"sixteen", "seventeen", "eighteen", "nineteen"};

string B[] = {"","","twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int S; cin >> S;

  if (S < 20) cout << A[S];
  else {
    cout << B[S/10];
    S %= 10;
    if (S) cout << "-" << A[S];
  }
  cout << endl;

  return 0;
}
