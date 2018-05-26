#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi V(N+1), T(N+1);
  vector<ll> sum(N+1);
  for (int i=1;i<=N;i++) cin >> V[i];
  vector<vi> end(N+1);
  for (int i=1;i<=N;i++) {
    cin >> T[i];
    sum[i] = T[i] + sum[i-1];
  }
  for (int i=1;i<=N;i++) {
    if (V[i] == 0) continue;
    int j = lower_bound(sum.begin(), sum.end(), sum[i-1]+V[i]) - sum.begin();
    if (j <= N) end[j].push_back(i);
  }
  ll cur = 0;
  for (int i=1;i<=N;i++) {
    cur += V[i] > 0;
    cur -= end[i].size();
    ll melted = cur*T[i];
    for (int j : end[i]) {
      melted += V[j] - (sum[i-1]-sum[j-1]);
    } 
    cout << melted << " \n"[i==N];
  }
  return 0;
}
