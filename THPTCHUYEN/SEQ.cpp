#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

const int INF(LLONG_MAX);

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, dp[3] = {-INF, -INF, -INF};
  cin >> n;

  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  for (int i(0); i < n; i++) {
    int val(a[i]);

    if (dp[1] != -INF)
      dp[2] = max(dp[2], dp[1] + val);

    if (dp[0] != -INF)
      dp[1] = max(dp[1], dp[0] - val);

    dp[0] = max(dp[0], val);
  }

  cout << dp[2];

  return 0;
}
