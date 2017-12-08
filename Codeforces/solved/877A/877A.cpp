#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string names[5] = {"Danil", "Olya", "Slava", "Ann", "Nikita"};
  string S; cin >> S;

  int cnt = 0;
  for (int i=0;i<5;i++) {
    if (S.find(names[i]) != string::npos) {
      cnt++;
      if (S.find(names[i]) != S.rfind(names[i])) cnt++;
    }
  }

  if (cnt == 1) cout << "YES";
  else cout << "NO";
  cout << endl;
  return 0;
}
