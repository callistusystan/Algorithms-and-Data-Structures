#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  while (N--) {
    int ai; cin >> ai;
    if (ai%2==0) ai--;
    cout << ai << " \n"[N==0];
  }
  return 0;
}