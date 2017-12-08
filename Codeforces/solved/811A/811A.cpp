#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B; cin >> A >> B;

  ll n1;
  n1 = (ll)sqrt(A);
  while (n1*n1 <= A) n1++;
  while (n1*n1 > A) n1--;

  // see if n2 can match
  if (B >= n1*(n1+1)) cout << "Vladik";
  else cout << "Valera";
  cout << endl;

  return 0;
}
