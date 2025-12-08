#include <climits>
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

  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  if (n < 3) {
    cout << 0;
    return 0;
  }

  int max_i(a[0]), max_ij(LLONG_MIN), res(LLONG_MIN);
  for (int k(2); k < n; k++) {
    max_ij = max(max_ij, max_i + a[k - 1]);
    max_i = max(max_i, a[k - 1]);
    res = max(res, max_ij - a[k]);
  }

  cout << res;

  return 0;
}
