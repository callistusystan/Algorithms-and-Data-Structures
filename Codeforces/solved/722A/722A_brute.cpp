#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int diff(int a, int b) {
  int ans = 0;
  while (a || b) {
    if (a%10 != b%10) ans++;
    a /= 10; b /= 10;
  }
  return ans;
}

int f(int l, int r, int val) {
  int best = 10, res;
  for (int i=l;i<=r;i++) {
    if (diff(i, val) < best) {
      best = diff(i, val);
      res = i;
    }
  }
  return res;
}

int main() {
  int F; cin >> F;
  int H,M;
  scanf("%d:%d\n", &H, &M);
  if (F == 12) {
    H = f(1, 12, H);
  } else {
    H = f(0, 23, H);
  }
  if (M >= 60) M -= 60;
  printf("%02d:%02d\n", H, M);
  return 0;
}
