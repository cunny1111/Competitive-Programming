#pragma GCC optimize("O3", "unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int &x : a) cin >> x;

  sort(a.begin(), a.end());
  int mins(abs(a[0] - a[1])), maxs(abs(a[n - 1] - a[n - 2]));
  cout << min(mins, maxs);
  return 0;
}
