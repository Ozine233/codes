#include <bits/stdc++.h>

using namespace std;

void solve() {
  long long r;
  cin >> r;

  long long h = r;
  long long ans = 0;
  for (long long i = 0; i <= r; i++) {
    while (i * i + h * h >= (r + 1) * (r + 1)) {
      h--;
    }
    long long c = h;
    while (i * i + c * c >= r * r && c > 0) {
      c--;
      ans++;
    }
  }

  cout << ans * 4 << endl;
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