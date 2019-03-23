#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  multiset<int> A;
  for (int i=0;i<N;i++) {
    int x; cin >> x;
    A.insert(x);
  }
  int X, Y;
  X = *A.rbegin();
  for (int i=1;i<=X;i++) {
    if (X%i == 0 && A.count(i)) A.erase(A.find(i));
  }
  Y = *A.rbegin();
  cout << X << " " << Y << endl;  
  return 0;
}
