#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int A,B;
  A = B = 0;
  for (int i=0;i<N;i++) {
    int ai,bi; cin >> ai >> bi;
    if (ai > bi) A++;
    else if (ai < bi) B++;
  }

  if (A > B) cout << "Mishka";
  else if (A == B)
    cout << "Friendship is magic!^^";
  else
    cout << "Chris";
  cout << endl;

  return 0;
}
