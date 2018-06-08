#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int id = 0;
vi group(2e5+5, -1);

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  string S; cin >> S;
  for (int i=0;i<N;i++) {
    if (group[A[i]] != -1) continue;
    group[A[i]] = id;
    int j = i;
    while (j+1 < N && S[j] == '1') group[A[++j]] = id;
    id++;
  }
  for (int i=0;i<N;i++) {
    if (A[i] == i+1) continue;
    if (group[i+1] != group[A[i]]) {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}
