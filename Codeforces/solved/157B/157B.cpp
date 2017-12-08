#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

double pi = acos(-1);

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  double area = 0;
  for (int i=0;i<N;i++) {
    if (i%2) area -= A[N-1-i]*A[N-1-i];
    else area += A[N-1-i]*A[N-1-i];
  }
  cout << fixed << setprecision(10) << pi*area << endl;
  return 0;
}
