#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

int check(int val, int m, int n) {
  int c(0);
  for (int i(1); i <= m; i++) {
    c += min(n, val / i);
  }
  return c;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int m, n, k;
  cin >> m >> n >> k;

  int l(1), r(m * n);
  int res(r);

  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (check(mid, m, n) >= k) {
      res = mid;
      r = mid - 1;
    } else
      l = mid + 1;
  }

  cout << res;

  return 0;
}
