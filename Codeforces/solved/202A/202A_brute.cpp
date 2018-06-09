#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool isPal(string &S) {
  int N = S.size();
  for (int i=0;i<N/2;i++) if (S[i] != S[N-1-i]) return false;
  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  vector<string> A;
  for (int i=1;i<1<<N;i++) {
    string T;
    int x = i;
    for (int j=0;j<N;j++) {
      if (x%2) T += S[j];
      x >>= 1;
    }
    if (isPal(T)) A.push_back(T);
  }
  sort(A.begin(), A.end());
  cout << A.back() << endl;
  return 0;
}
