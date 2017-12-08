#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<vi> A(3, vi(3));

bool check() {
  int sum = A[0][0] + A[0][1] + A[0][2];
  for (int i=0;i<3;i++) {
    int x = 0;
    for (int j=0;j<3;j++) {
      x += A[i][j];
    }
    if (x != sum) return false;
  }
  for (int j=0;j<3;j++) {
    int x = 0;
    for (int i=0;i<3;i++) {
      x += A[i][j];
    }
    if (x != sum) return false;
  }
  int x1,x2;
  x1 = x2 = 0;
  for (int i=0;i<3;i++) {
    x1 += A[i][i];
    x2 += A[i][2-i];
  }
  if (x1 == sum && x2 == sum) return true;
  return false;
}

void print() {
  for (int i=0;i<3;i++)
    for (int j=0;j<3;j++)
      cout << A[i][j] << " \n"[j==2];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  for (int i=0;i<3;i++)
    for (int j=0;j<3;j++)
      cin >> A[i][j];
  for (int i=1;i<=1e5;i++) {
    A[0][0] = i;
    int sum = A[0][0] + A[0][1] + A[0][2];
    A[1][1] = sum - A[1][0] - A[1][2];
    A[2][2] = sum - A[2][0] - A[2][1];
    if (check()) {
      print();
      return 0;
    }
  }
  return 0;
}
