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

  vector<int> dp(n + 1, 0);
  dp[1] = max(0LL, a[1]);

  if (n == 0) {
    cout << 0;
    return 0;
  }

  if (n >= 2) {
    dp[2] = max({dp[1], a[2], a[1] + a[2]});
  }

  for (int i(3); i <= n; i++) {
    int o1(dp[i - 1]);
    int o2(dp[i - 2] + a[i]);
    int o3(dp[i - 3] + a[i - 1] + a[i]);

    dp[i] = max({o1, o2, o3});
  }

  cout << dp[n];

  return 0;
}
