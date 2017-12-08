#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<string> DAYS = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
vi days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string A,B; cin >> A >> B;
  int C,D;
  C = find(DAYS.begin(), DAYS.end(), A) - DAYS.begin();
  D = find(DAYS.begin(), DAYS.end(), B) - DAYS.begin();
  for (int i=0;i<11;i++) {
    if ((C + days[i])%7 == D) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
