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

  vector<int> a(n);
  for (int i(0); i < n; i++) {
    cin >> a[i];
  }

  sort(a.rbegin(), a.rend());
  for (int i(0); i < n; i++) {
    int curr = a[i] * (i + 1);
    res = max(res, curr);
  }

  cout << res;

  return 0;
}
