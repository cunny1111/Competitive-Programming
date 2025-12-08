#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, t, s(0);
  cin >> n;
  vector<int> pref(n + 1, 0);
  for (int i(1); i <= n; i++) {
    int x;
    cin >> x;
    pref[i] = pref[i - 1] + x;
  }

  cin >> t;
  while (t--) {
    int l, r;
    cin >> l >> r;

    cout << pref[r] - pref[l - 1] << "\n";
  }
  return 0;
}
