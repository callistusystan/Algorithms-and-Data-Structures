#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  string S; cin >> S;
  vector<char> A(26);
  for (int i=0;i<26;i++) A[i] = i;
  for (int i=0;i<M;i++) {
    char c,d; cin >> c >> d;
    int ci, di;
    for (int j=0;j<26;j++) {
      if (A[j] == c-'a') ci = j;
      if (A[j] == d-'a') di = j;
    }
    swap(A[ci], A[di]);
  }
  for (char c : S) {
    cout << (char)('a'+A[c-'a']);
  }
  cout << endl;
  return 0;
}
