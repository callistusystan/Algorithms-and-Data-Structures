#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll S[5] = {500, 1000, 1500, 2000, 2500};

  vector<ll> M(5), W(5);
  ll HS, HU;
  for (int i=0;i<5;i++) cin >> M[i];
  for (int i=0;i<5;i++) cin >> W[i];
  cin >> HS >> HU;

  ll score = 0;
  for (int i=0;i<5;i++) {
    score += max(75*S[i], (250-M[i])*S[i] - 250*50*W[i]);
  }

  score += HS*250*100;
  score -= HU*250*50;

  cout << score/250 << endl;

  return 0;
}
