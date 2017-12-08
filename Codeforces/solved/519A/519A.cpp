#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

string PIECES = "QRBNPK";
int POINTS[] = {9,5,3,3,1,0};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int W, B;
  W = B = 0;

  for (int i=0;i<8;i++) {
    string S; cin >> S;
    for (char c : S) {
      if (isalpha(c)) {
        int p = POINTS[PIECES.find(toupper(c))];

        if (isupper(c)) {
          W += p;
        } else {
          B += p;
        }
      }
    }
  }

  if (W > B) cout << "White";
  else if (W == B) cout << "Draw";
  else cout << "Black";
  cout << endl;

  return 0;
}
