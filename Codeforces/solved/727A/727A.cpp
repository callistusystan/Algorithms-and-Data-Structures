#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A, B; cin >> A >> B;
  queue<ll> q;
  map<ll, ll> parent;
  q.push(A);
  parent[A] = -1;
  while (!q.empty()) {
    ll front = q.front(); q.pop();
    if (front == B) {
      cout << "YES\n";
      stack<ll> order;
      ll cur = B;
      while (cur != -1) {
        order.push(cur);
        cur = parent[cur];
      }
      cout << order.size() << endl;
      while (!order.empty()) {
        cout << order.top() << " ";
        order.pop();
      }
      cout << endl;
      return 0;
    } else if (front < B) {
      q.push(2*front);
      q.push(10*front+1);
      parent[2*front] = front;
      parent[10*front+1] = front;
    }
  }
  cout << "NO\n";
  return 0;
}
