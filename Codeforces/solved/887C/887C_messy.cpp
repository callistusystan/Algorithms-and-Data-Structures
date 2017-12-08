#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

vi cube(24);

void print() {
  for (int i=0;i<6;i++) {
    cout << (char)('A'+i) << endl;
    for (int j=0;j<4;j++) {
      cout << cube[i*4+j] << " \n"[j==3];
    }
  }
  cout << endl;
}

bool isSolved() {
  for (int i=0;i<6;i++) {
    for (int j=0;j<4;j++) {
      if (cube[i*4+j] != cube[i*4]) return false;
    }
  }

  return true;
}

void rotateA() {
  for (int i=0;i<2;i++) {
    int t;
    t = cube[0];
    cube[0] = cube[1];
    cube[1] = cube[3];
    cube[3] = cube[2];
    cube[2] = t;

    t = cube[4];
    cube[4] = cube[13];
    cube[13] = cube[12];
    cube[12] = cube[21];
    cube[21] = cube[20];
    cube[20] = cube[17];
    cube[17] = cube[16];
    cube[16] = cube[5];
    cube[5] = t;
  }
}

void rotateB() {
  for (int i=0;i<2;i++) {
    int t;
    t = cube[12];
    cube[12] = cube[13];
    cube[13] = cube[15];
    cube[15] = cube[14];
    cube[14] = t;

    t = cube[0];
    cube[0] = cube[2];
    cube[2] = cube[4];
    cube[4] = cube[6];
    cube[6] = cube[8];
    cube[8] = cube[10];
    cube[10] = cube[23];
    cube[23] = cube[21];
    cube[21] = t;
  }
}

void rotateC() {
  for (int i=0;i<2;i++) {
    int t;
    t = cube[4];
    cube[4] = cube[5];
    cube[5] = cube[6];
    cube[6] = cube[7];
    cube[7] = t;

    t = cube[2];
    cube[2] = cube[3];
    cube[3] = cube[16];
    cube[16] = cube[18];
    cube[18] = cube[9];
    cube[9] = cube[8];
    cube[8] = cube[15];
    cube[15] = cube[13];
    cube[13] = t;
  }
}

void rotateD() {
  for (int i=0;i<2;i++) {
    int t;
    t = cube[16];
    cube[16] = cube[17];
    cube[17] = cube[19];
    cube[19] = cube[18];
    cube[18] = t;

    t = cube[1];
    cube[1] = cube[20];
    cube[20] = cube[22];
    cube[22] = cube[11];
    cube[11] = cube[9];
    cube[9] = cube[7];
    cube[7] = cube[5];
    cube[5] = cube[3];
    cube[3] = t;
  }
}

void rotateE() {
  for (int i=0;i<2;i++) {
    int t;
    t = cube[20];
    cube[20] = cube[21];
    cube[21] = cube[22];
    cube[22] = cube[23];
    cube[23] = t;

    t = cube[0];
    cube[0] = cube[12];
    cube[12] = cube[14];
    cube[14] = cube[10];
    cube[10] = cube[11];
    cube[11] = cube[19];
    cube[19] = cube[17];
    cube[17] = cube[1];
    cube[1] = t;
  }
}

void rotateF() {
  for (int i=0;i<2;i++) {
    int t;
    t = cube[8];
    cube[8] = cube[9];
    cube[9] = cube[10];
    cube[10] = cube[11];
    cube[11] = t;

    t = cube[6];
    cube[6] = cube[7];
    cube[7] = cube[18];
    cube[18] = cube[19];
    cube[19] = cube[22];
    cube[22] = cube[23];
    cube[23] = cube[14];
    cube[14] = cube[15];
    cube[15] = t;
  }
}

bool solve() {
  // A
  rotateA();
  if (isSolved()) return true;
  rotateA();rotateA();
  if (isSolved()) return true;
  rotateA();

  // B
  rotateB();
  if (isSolved()) return true;
  rotateB();rotateB();
  if (isSolved()) return true;
  rotateB();

  // C
  rotateC();
  if (isSolved()) return true;
  rotateC();rotateC();
  if (isSolved()) return true;
  rotateC();

  // D
  rotateD();
  if (isSolved()) return true;
  rotateD();rotateD();
  if (isSolved()) return true;
  rotateD();

  // E
  rotateE();
  if (isSolved()) return true;
  rotateE();rotateE();
  if (isSolved()) return true;
  rotateE();

  // F
  rotateF();
  if (isSolved()) return true;
  rotateF();rotateF();
  if (isSolved()) return true;
  rotateF();

  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<26;i++) cin >> cube[i];

  if (solve()) cout << "YES";
  else cout << "NO";
  cout << endl;
  return 0;
}
