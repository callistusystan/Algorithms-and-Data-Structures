#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
vi A(105);

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=0;i<N;i++) cin >> A[i];

  if (N%2 && A[0]%2 && A[N-1]%2) cout << "Yes";
  else cout << "No";
  cout << endl;
  return 0;
}
