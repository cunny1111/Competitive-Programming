#pragma GCC optimize("O3", "unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool check(int mid, int n, int L, const vector<int>& a, const vector<int>& b) {
    int needed(0);
    for (int i(0); i < n; i++) {
        if (a[i] >= mid) continue;
        int diff(mid - a[i]);
        int liter((diff + b[i] - 1) / b[i]);
        needed += liter;

        if (needed > L) return false;
    }
    return needed <= L;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, L;
  cin >> n >> L;

  vector<int> a(n);
  vector<int> b(n);
  for (int i(0); i < n; i++) cin >> a[i] >> b[i];

  int l(0), r(200000000000000LL), res(0);
  while (l <= r) {
    int mid(l + (r - l) / 2);
    if (check(mid, n, L, a, b)) {
        res = mid;
        l = mid + 1;
    }
    else r = mid - 1;
  }

  cout << res;

  return 0;
}
