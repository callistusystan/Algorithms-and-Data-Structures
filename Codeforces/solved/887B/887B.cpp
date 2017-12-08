#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int N;
vector<vi> A(3, vi(6));
bool dfs(int id, vi &need) {
  if (id == N) {
    for (int i=0;i<10;i++) {
      if (need[i] != 0) return false;
    }
    return true;
  }
  bool res = false;
  res |= dfs(id+1, need);
  for (int i=0;i<6;i++) {
    need[A[id][i]]--;
    res |= dfs(id+1, need);
    need[A[id][i]]++;
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=0;i<N;i++)
    for (int j=0;j<6;j++){
      cin >> A[i][j];
    }

  int T = 1;
  while (1) {
    vi need(10);
    int num = T;
    while (num > 0) {
      need[num%10]++;
      num /= 10;
    }

    if (!dfs(0, need)) {
      cout << T-1 << endl;
      return 0;
    }
    T++;
  }

  return 0;
}
