#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  int H1, M1, H2, M2;
  scanf("%d:%d\n", &H1, &M1);
  scanf("%d:%d\n", &H2, &M2);

  H1 -= H2;
  M1 -= M2;
  if (M1 < 0) {
    M1 += 60;
    H1--;
  }
  H1 = ((H1%24)+24)%24;
  M1 = ((M1%60)+60)%60;
  printf("%02d:%02d\n", H1, M1);

  return 0;
}
