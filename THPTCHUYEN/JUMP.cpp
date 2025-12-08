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

  vector<int> y(n + 1);
  for (int i(1); i <= n; i++)
    cin >> y[i];

  vector<int> dp(n + 1);
  dp[1] = 0;
  dp[2] = abs(y[2] - y[1]);
  for (int i(3); i <= n; i++) {
    dp[i] = min(dp[i - 1] + abs(y[i] - y[i - 1]),
                dp[i - 2] + 3 * abs(y[i] - y[i - 2]));
  }

  cout << dp[n];

  return 0;
}
