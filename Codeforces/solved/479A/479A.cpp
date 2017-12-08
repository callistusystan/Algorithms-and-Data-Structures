#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A, B, C;
  cin >> A >> B >> C;

  vi val;
  val.push_back(A+B+C);
  val.push_back(A+B*C);
  val.push_back(A*B+C);
  val.push_back(A*B*C);
  val.push_back((A+B)*C);
  val.push_back(A*(B+C));

  cout << *max_element(val.begin(), val.end()) << endl;

  return 0;
}
