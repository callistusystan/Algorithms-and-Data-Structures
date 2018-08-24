#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool f(char a, char b) {
  if ((a == '0' && b == '2') || (a == '2' && b == 0)) return false;
  return a < b;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  sort(S.begin(), S.end(), f);
  cout << S << endl;
  return 0;
}
