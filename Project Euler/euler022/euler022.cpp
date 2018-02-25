#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int f(string S) {
  int sum = 0;
  for (char c : S) sum += c-'A'+1;
  return sum;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  int Q; cin >> Q;
  while (Q--) {
    string S; cin >> S;
    for (int i=0;i<N;i++) {
      if (A[i] == S) {
        cout << f(A[i])*(i+1) << endl;
        break;
      }
    }
  }
  return 0;
}
