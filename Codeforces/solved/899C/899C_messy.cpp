#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;
  if (N%4 == 0) {
    cout << "0\n";
    cout << N/2 << " ";
    for (int i=0;i<N/4;i++) cout << 1+i << " " << N-i << " ";
    cout << endl;
  } else if (N%4 == 1) {
    cout << "1\n";
    cout << 1 + (N-3)/2 << " " << N << " ";
    for (int i=0;i<(N-3)/4;i++) cout << 2+i << " " << N-2-i << " ";
    cout << N/2 << " \n";
  } else if (N%4 == 2) {
    cout << "1\n";
    cout << N/2 << " ";
    for (int i=0;i<N/4;i++) cout << 1+i << " " << N-i << " ";
    cout << N/2 << " \n";
  } else {
    cout << "0\n";
    cout << 1 + (N-3)/2 << " " << N << " ";
    for (int i=0;i<(N-3)/4;i++) cout << 2+i << " " << N-2-i << " ";
    cout << endl;
  }
  return 0;
}
