#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

struct trip {
  int a,b,c;
  trip(int _a, int _b, int _c) : a(_a), b(_b), c(_c) {}
};

vi cnt(10);
vector<trip> A;

bool f(int x, int a, int b, int c) {
  while (cnt[x]) {
    A.push_back(trip(a,b,c));
    cnt[a]--; cnt[b]--; cnt[c]--;
    if (cnt[a] < 0 || cnt[b] < 0 || cnt[c] < 0) return false;
  }
  return true;
}

bool solve() {
  int N; cin >> N;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (ai == 5 || ai == 7) return false;
    cnt[ai]++;
  }
  if (!f(4,1,2,4)) return false;
  if (!f(3,1,3,6)) return false;
  if (!f(6,1,2,6)) return false;
  for (int i=1;i<=7;i++)
    if (cnt[i]) return false;
  for (trip &t : A) cout << t.a << " " << t.b << " " << t.c << endl;
  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  if (!solve()) cout << "-1\n";
  return 0;
}

/*
  1 => 1 2 4 / 1 2 6 / 1 3 6
  2 => 1 2 4 / 1 2 6
  3 => 1 3 6
  4 => 1 2 4
  5 => -1
  6 => 1 2 6 / 1 3 6
  7 => -1
*/
