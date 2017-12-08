#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

/*
1 : 1
2 : 1
3 : 1 3
4 : 3 1 4 2
5 : 3 1 5 2 4
6 : 4 1 6 2 5 3
7 : 4 1 7 2 6 3 5
8 : 5 1 8 2 7 3 6 4
9 : 5 1 9 2 8 3 7 4 6
10: 6 1 10 2 9 3 8 4 7 5
*/

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  if (N <= 2) {
    cout << 1 << endl;
    cout << 1 << endl;
  } else if (N == 3) {
    cout << 2 << endl;
    cout << 1 << " " << 3 << endl;
  } else {
    cout << N << endl;
    cout << N/2 + 1 << " ";
    for (int i=1;i<N/2+1;i++) {
      cout << i << " ";
      if (N-i+1 != N/2+1) {
         cout << N-i+1 << " ";
      }
    }
    cout << endl;
  }


  return 0;
}
