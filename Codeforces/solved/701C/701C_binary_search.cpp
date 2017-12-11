#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
string S;
set<char> A;

bool f(int x) {
  map<char, int> freq;
  for (int i=0;i<x;i++)
    freq[S[i]]++;

  if (freq.size() == A.size()) return true;
  for (int i=x;i<N;i++) {
    freq[S[i]]++;
    freq[S[i-x]]--;
    if (freq[S[i-x]] == 0) freq.erase(S[i-x]);
    if (freq.size() == A.size()) return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> S;
  for (char c : S) A.insert(c);

  int lo = 0, hi = N+1;
  while (lo != hi-1) {
    int mid = (lo + hi)/2;
    if (f(mid)) hi = mid;
    else lo = mid;
  }
  cout << hi << endl;
  return 0;
}
