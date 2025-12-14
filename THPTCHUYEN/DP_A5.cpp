#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  int res(a[0]), dp(a[0]);
  for (int i(1); i < n; i++) {
    dp = max(a[i], a[i] + dp);
    res = max(res, dp);
  }

  cout << res;

  return 0;
}
