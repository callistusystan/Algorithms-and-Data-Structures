#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T,X,Y,A,B; cin >> T >> X >> Y >> A >> B;
  string S; cin >> S;
  for (int i=0;i<T;i++) {
    if (S[i] == 'N' && Y < B) Y++; 
    else if (S[i] == 'E' && X < A) X++;
    else if (S[i] == 'S' && Y > B) Y--;
    else if (S[i] == 'W' && X > A) X--;
    if (X == A && Y == B) {
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << "-1\n";
  return 0;
}
