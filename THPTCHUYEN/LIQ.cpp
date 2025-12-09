#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, res(0);
  cin >> n;

  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  vector<int> dp(n, 1);
  for (int i(1); i < n; i++) {
    for (int j(0); j < i; j++) {
      if (a[j] < a[i]) {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
    res = max(res, dp[i]);
  }

  cout << res;

  return 0;
}
