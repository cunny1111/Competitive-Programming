#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, t;
  cin >> n >> t;

  while (t--) {
    int x;
    cin >> x;

    int l(1), r(n), res(-1);
    while (l <= r) {
      int mid = l + (r - l) / 2;
      int val(mid * mid + 1);

      if (val >= x) {
        res = val;
        r = mid - 1;
      } else
        l = mid + 1;
    }

    if (res != -1)
      cout << res << "\n";
    else
      cout << n * n + 1 << "\n";
  }

  return 0;
}
