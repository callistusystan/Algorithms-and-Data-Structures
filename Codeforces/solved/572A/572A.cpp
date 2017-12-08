#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int NA,NB; cin >> NA >> NB;
  int K,M; cin >> K >> M;

  int biggest, smallest;
  for (int i=0;i<NA;i++) {
    int ai; cin >> ai;
    if (i == K-1) biggest = ai;
  }

  for (int i=0;i<NB;i++) {
    int bi; cin >> bi;
    if (NB-i == M) smallest = bi;
  }

  if (biggest < smallest) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
