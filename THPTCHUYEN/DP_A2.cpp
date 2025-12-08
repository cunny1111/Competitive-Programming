#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, res(LLONG_MIN);
  cin >> n;

  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  if (n <= 2) {
    cout << 0;
    return 0;
  }

  vector<int> mp(n);
  mp[0] = a[0];
  for (int i(1); i < n; i++)
    mp[i] = min(mp[i - 1], a[i]);

  vector<int> dp(n, LLONG_MIN);
  for (int j(1); j < n; j++) {
    dp[j] = a[j] - mp[j - 1];
    res = max(res, dp[j]);
  }

  cout << res;

  return 0;
}
