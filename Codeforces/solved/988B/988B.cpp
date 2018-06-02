#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool f(string a, string b) {
  return a.size() < b.size();
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end(), f);
  for (int i=0;i<N;i++) {
    for (int j=0;j<i;j++) {
      if (A[i].find(A[j]) == string::npos) {
        cout << "NO\n";
        return 0;
      }
    }
  }
  cout << "YES\n";
  for (string s : A) cout << s << endl;
  return 0;
}
