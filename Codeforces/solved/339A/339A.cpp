#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  stringstream ss(S);

  vi nums;
  int num; char c;
  
  while (ss >> num) {
    nums.push_back(num);
    ss >> c;
  }

  sort(nums.begin(), nums.end());

  for (int i=0;i<nums.size();i++) {
    if (i) cout <<"+";
    cout << nums[i];
  }
  cout << endl;

  return 0;
}
