#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi L(6);
  for (int i=0;i<6;i++) cin >> L[i];

  sort(L.begin(), L.end());

  int lLeg = L[3];
  int l = 0;
  for (int i=0;i<6;i++) {
    if (L[i] == lLeg) l++;
  }

  if (l >= 4) {
    int nErase = 0;
    for (int i=0;i<6;i++) {
      if (nErase == 4) break;
      if (L[i] == lLeg) {
        L.erase(L.begin()+i);
        nErase++;
        i--;
      }
    }

    if (L[0] == L[1]) cout << "Elephant";
    else cout << "Bear";
  } else {
    cout << "Alien";
  }
  cout << endl;

  return 0;
}
