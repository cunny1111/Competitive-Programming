#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;

bool check(int len) {
  if (len == 0)
    return false;
  int c(0);

  for (int i(0); i < n; i++) {
    c += a[i] / len;
  }
  return c >= k;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> k;
  a.resize(n);

  int maxv(0);
  for (int i(0); i < n; i++) {
    cin >> a[i];
    maxv = max(maxv, a[i]);
  }

  int l(1), r(maxv), res(0);
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (check(mid)) {
      res = mid;
      l = mid + 1;
    } else
      r = mid - 1;
  }

  cout << res;

  return 0;
}
