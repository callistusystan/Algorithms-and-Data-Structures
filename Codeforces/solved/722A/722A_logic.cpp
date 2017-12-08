#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  int F; cin >> F;
  int H,M;
  scanf("%d:%d\n", &H, &M);
  if (F == 12) {
    if (!(1 <= H && H <= 12)) {
      if (H == 0) H = 1;
      else {
        if (H%10) H %= 10;
        else H = 10;
      }
    }
  } else {
    if (H > 23) {
      H %= 10;
    }
  }
  if (M >= 60) M -= 60;
  printf("%02d:%02d\n", H, M);
  return 0;
}
