#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int ask[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,4,9,25,49};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi divisors;
  for (int i : ask) {
    cout << i << endl;
    string res; cin >> res;
    if (res == "yes") {
      divisors.push_back(i);
    }
  }
  if (divisors.size() <= 1) cout << "prime\n";
  else cout << "composite\n";
  return 0;
}
