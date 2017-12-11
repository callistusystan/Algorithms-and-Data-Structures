#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N,K;
string S;
vi A(1e5+5);

bool f(int x) {
  for (int i=1;i+x-1<=N;i++) {
    int cntA = A[i+x-1] - A[i-1];
    int cntB = x-cntA;
    if (cntA<=K || cntB <= K) return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> K;
  cin >> S;
  for (int i=0;i<N;i++) {
    if (S[i] == 'a') A[i+1]++;
    if (i) A[i+1] += A[i];
  }
  int lo = 0, hi = N+1;
  while (lo != hi-1) {
    int mid = (lo+hi)/2;
    if (f(mid)) lo = mid;
    else hi = mid;
  }
  cout << lo << endl;
  return 0;
}
