#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int M, D; cin >> M >> D;
  M--; D--;
  int need = days[M] + D;
  cout << (need+6)/7 << endl;
  return 0;
}
