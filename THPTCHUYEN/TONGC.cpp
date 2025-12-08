#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, k, c(0);
  cin >> n >> k;

  vector<int> a(n + 1);
  vector<int> dp(n + 1, 0);
  for (int i(1); i <= n; i++) {
    cin >> a[i];
    dp[i] = dp[i - 1] + a[i];
  }

  for (int i(1); i <= n; i++) {
    for (int j(i); j <= n; j++) {
      int curr(dp[j] - dp[i - 1]);

      if (curr == k)
        c++;
      if (curr > k)
        break;
    }
  }

  cout << c;

  return 0;
}
