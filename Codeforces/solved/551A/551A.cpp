#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  multiset<int> S;
  vi A(N), pos(2005);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    S.insert(A[i]);
  }

  int r = 1;
  for (auto it=S.rbegin();it!=S.rend();it++) {
    int num = *it;
    if (pos[num] == 0)
      pos[num] = r;
    r++;
  }

  for (int i=0;i<N;i++) {
    cout << pos[A[i]] << " \n"[i==N-1];
  }

  return 0;
}
