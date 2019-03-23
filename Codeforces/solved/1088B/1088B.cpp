#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  set<int> A;
  for (int i=0;i<N;i++){
    int x; cin >> x;
    A.insert(x); 
  } 
  int sub = 0;
  while (K--) {
    if (A.empty()) cout << "0\n";
    else {
      cout << *A.begin() - sub << endl;
      sub += *A.begin() - sub;
      A.erase(A.begin());
    }
  }  
  return 0;
}
