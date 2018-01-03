#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
vector<pair<string, string>> A(105);

void solve(string x) {
  for (int i=0;i<N;i++)
    if (A[i].second == x)
      cout << A[i].first << endl;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=0;i<N;i++) {
    cin >> A[i].first >> A[i].second;
  }
  solve("rat");
  for (int i=0;i<N;i++)
    if (A[i].second == "woman" || A[i].second == "child")
      cout << A[i].first << endl;
  solve("man");
  solve("captain");
  return 0;
}
