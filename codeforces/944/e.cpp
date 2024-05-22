#include <bits/stdc++.h>

using namespace std;

using LL = long long;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n, k, q;
    cin >> n >> k >> q;

    vector<LL> a(k + 1), b(k + 1);

    for (int i = 1; i <= k; i++)
      cin >> a[i];
    for (int i = 1; i <= k; i++)
      cin >> b[i];

    while (q--) {
      long long d;
      cin >> d;

      auto it = lower_bound(a.begin(), a.end(), d);
      auto idx = it - a.begin();

      if (a[idx] == d)
        cout << b[idx] << endl;
      else {
        auto x = (d - a[idx - 1]) * (b[idx] - b[idx - 1]);
        auto y = (a[idx] - a[idx - 1]);
        cout << b[idx - 1] + x / y << " ";
      }
    }
    cout << endl;
  }

  return 0;
}