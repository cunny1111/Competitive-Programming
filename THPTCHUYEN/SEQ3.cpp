#pragma GCC optimize("O3")
#include <bits/stdc++.h>
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

  int ai(a[1]), res(a[1]);
  for (int i(2); i < n; i++) {
    ai = max(a[i], ai + a[i]);
    res = max(res, ai);
  }

  cout << res;

  return 0;
}
