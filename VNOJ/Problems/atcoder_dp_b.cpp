#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, k;
  cin >> n >> k;

  vector<int> a(n + 1);
  for (int i(1); i <= n; i++)
    cin >> a[i];

  vector<int> dp(n + 1, 1e9 + 7);
  dp[1] = 0;

  for (int i(2); i <= n; i++) {
    for (int j(1); j <= k; j++) {
      if (i - j >= 1) {
        dp[i] = min(dp[i], dp[i - j] + abs(a[i] - a[i - j]));
      } else
        break;
    }
  }

  cout << dp[n];

  return 0;
}
