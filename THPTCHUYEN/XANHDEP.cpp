#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, res(0);
  cin >> n;

  while (n--) {
    string s;
    cin >> s;

    vector<int> dp(s.length(), 1);
    for (int i(1); i < (long long)s.length(); i++) {
      if (s[i] == s[i - 1])
        dp[i] = max(dp[i], dp[i - 1] + 1);
      else
        dp[i] = 1;
      res = max(res, dp[i]);
    }
  }

  cout << res;

  return 0;
}
