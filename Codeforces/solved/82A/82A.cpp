#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;
  ll i = 1;
  while (i*5 < N) {
    N -= 5*i;
    i *= 2;
  }

  N--;
  cout << names[N/i] << endl;

  return 0;
}
