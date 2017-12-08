#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int M, S;
vector<vi> memo1(105, vi(905,-1)), memo2(105, vi(905,-1)), child1(105, vi(905,-1)), child2(105, vi(905,-1));

int rec1(int id, int re) {
  if (re < 0) return 0;
  if (id == M && re == 0) return 1;
  else if (id == M && re != 0) return 0;
  if (memo1[id][re] != -1) return memo1[id][re];

  memo1[id][re] = 0;
  for (int i=(id==0?1:0);i<10;i++) {
    int res = rec1(id+1, re-i);
    if (res == 1) {
      memo1[id][re] = 1;
      child1[id][re] = i;
      break;
    }
  }
  return memo1[id][re];
}

int rec2(int id, int re) {
  if (re < 0) return 0;
  if (id == M && re == 0) return 1;
  else if (id == M && re != 0) return 0;
  if (memo2[id][re] != -1) return memo2[id][re];

  memo2[id][re] = 0;
  for (int i=9;i>=(id==0?1:0);i--) {
    int res = rec2(id+1, re-i);
    if (res == 1) {
      memo2[id][re] = 1;
      child2[id][re] = i;
      break;
    }
  }
  return memo2[id][re];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> M >> S;

  if (M == 1 && S == 0) {
    cout << "0 0" << endl;
    return 0;
  }

  int res = rec1(0, S);

  if (res == 0) {
    cout << "-1 -1" << endl;
  } else {
    rec2(0, S);

    int i, re;
    i = 0; re = S;
    while (i < M) {
      cout << child1[i][re];
      re -= child1[i][re];
      i++;
    }
    cout << " ";

    i = 0; re = S;
    while (i < M) {
      cout << child2[i][re];
      re -= child2[i][re];
      i++;
    }
    cout << endl;
  }

  return 0;
}
