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

  vector<int> a(n + 1);
  for (int i(1); i <= n; i++)
    cin >> a[i];

  vector<int> dp(n + 1);
  dp[0] = 0;
  dp[1] = 0;
  dp[2] = abs(a[1] - a[2]);

  if (n <= 2) {
    cout << dp[n];
    return 0;
  }

  for (int i(3); i <= n; i++) {
    dp[i] =
        min(dp[i - 2] + abs(a[i - 2] - a[i]), dp[i - 1] + abs(a[i - 1] - a[i]));
  }

  cout << dp[n];

  return 0;
}
