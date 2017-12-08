#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<int, vi> A;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    A[ai].push_back(i+1);
  }
  if ((*A.begin()).second.size() == 1) cout << (*A.begin()).second[0] << endl;
  else cout << "Still Rozdil\n";
  return 0;
}
