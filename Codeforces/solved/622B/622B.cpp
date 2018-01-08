#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  int H,M; scanf("%d:%d\n", &H, &M);
  int add; cin >> add;
  M += add;
  H += M/60;
  M %= 60;
  H %= 24;
  printf("%02d:%02d\n", H, M);
  return 0;
}
