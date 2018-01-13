#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int H1,A1,C1,H2,A2;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> H1 >> A1 >> C1 >> H2 >> A2;
  int strikes = (H2+A1-1)/A1;
  int dmgWhileStrike = (strikes-1)*A2;
  int heals = 0;
  if (dmgWhileStrike+1 > H1) {
    heals = (dmgWhileStrike+1-H1+C1-A2-1)/(C1-A2);
  }
  cout << strikes + heals << endl;
  while (heals--) cout << "HEAL\n";
  while (strikes--) cout << "STRIKE\n";
  return 0;
}
