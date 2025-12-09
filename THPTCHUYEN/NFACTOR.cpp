#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

int countz(int n) {
  int c(0);
  while (n > 0) {
    c += n / 5;
    n /= 5;
  }
  return c;
}

void solve() {
  int n;
  cin >> n;

  int l(1), r(5 * n), res(-1);
  while (l <= r) {
    int mid = l + (r - l) / 2;
    int zeros(countz(mid));

    if (zeros >= n) {
      res = mid;
      r = mid - 1;
    } else
      l = mid + 1;
  }
  cout << res << "\n";
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
