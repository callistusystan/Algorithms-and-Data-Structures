#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
string S,T;
vi A(2e5+5);

bool f(int num) {
  vi can(N, 1);
  for (int i=0;i<num;i++) can[A[i]] = 0;
  int j = 0;
  for (int i=0;i<N;i++) {
    if (!can[i]) continue;
    if (S[i] == T[j]) j++;
    if (j == (int)T.size()) return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> S >> T;
  N = S.size();
  for (int i=0;i<N;i++) {
    cin >> A[i]; A[i]--;
  }
  int lo = -1, hi = N+1;
  while (lo != hi-1) {
    int mid = (lo+hi)/2;
    if (f(mid)) lo = mid;
    else hi = mid;
  }
  cout << lo << endl;
  return 0;
}
