#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, priority_queue<int>> mp;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i] >> 2].push(-a[i]);
  }
  for (int i = 0; i < n; i++) {
    cout << -mp[a[i] >> 2].top() << " ";
    mp[a[i] >> 2].pop();
  }
  cout << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}