#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<int, int> A;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    A[ai]++;
  }

  for (auto rit=A.rbegin();rit != A.rend();rit++) {
    if ((*rit).second%2) {
      cout << "Conan\n";
      return 0;
    }
  }
  cout << "Agasa\n";
  return 0;
}
