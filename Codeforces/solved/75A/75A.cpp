#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B; cin >> A >> B;
  ll C = A+B;

  string AA,BB,CC;
  for (char c: to_string(A)) {
    if (c != '0') AA += c;
  }
  for (char c: to_string(B)) {
    if (c != '0') BB += c;
  }
  for (char c: to_string(C)) {
    if (c != '0') CC += c;
  }

  if ((ll)stoi(AA) + stoi(BB) == (ll)stoi(CC)) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
