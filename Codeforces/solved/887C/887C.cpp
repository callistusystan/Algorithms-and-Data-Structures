#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

vi cube(25);
int face[3][4] = {
  {5,6,7,8},
  {1,2,3,4},
  {17,18,19,20}
};
int rot[3][8] = {
  {3,4,17,19,10,9,16,14},
  {5,14,13,22,21,18,17,6},
  {6,4,2,21,23,12,10,8}
};

bool isSolved() {
  for (int i=1;i<=21;i+=4)
    for (int j=0;j<4;j++)
      if (cube[i+j] != cube[i]) return false;
  return true;
}

void rotate(int f) {
  for (int i=0;i<2;i++) {
    int t;
    t = cube[face[f][0]];
    for (int j=0;j<3;j++) {
      cube[face[f][j]] = cube[face[f][j+1]];
    }
    cube[face[f][3]] = t;

    t = cube[rot[f][0]];
    for (int j=0;j<7;j++) {
      cube[rot[f][j]] = cube[rot[f][j+1]];
    }
    cube[rot[f][7]] = t;
  }
}

bool solve() {
  for (int i=0;i<3;i++) {
    rotate(i);
    if (isSolved()) return true;
    rotate(i); rotate(i);
    if (isSolved()) return true;
    rotate(i);
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=1;i<=24;i++) cin >> cube[i];

  if (solve()) cout << "YES";
  else cout << "NO";
  cout << endl;
  return 0;
}
