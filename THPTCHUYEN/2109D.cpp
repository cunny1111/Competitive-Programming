#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool check(const vector<int>& a, int t, int n) {
    if (t == 0) return false;
    int robot(0);
    for (int x : a) {
        robot += (x + t - 1) / t;
        if (robot > n) return false;
    }
    return robot <= n;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, m, maxv(0);
  cin >> n >> m;

  vector<int> a(m);
  for (int &x : a) {
    cin >> x;
    maxv = max(maxv, x);
  }

  int l(1), r(maxv);
  int res(r);
  while (l <= r) {
    int mid(l + (r - l) / 2);
    if (check(a, mid, n)) {
        res = mid;
        r = mid - 1;
    } 
    else l = mid + 1;
  }

  cout << res;

  return 0;
}
