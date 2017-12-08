#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int N, K;
string S;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N >> K >> S;

  int G = S.find('G');
  int T = S.find('T');
  if (T < G) {
    swap(G, T);
  }

  if ((T-G)%K) {
    cout << "NO";
  } else {
    bool can = true;
    while (G < T) {
      G += K;
      if (S[G] == '#') can = false;
    }
    if (can) cout << "YES";
    else cout << "NO";
  }
  cout << endl;
  return 0;
}
