#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, t;
  cin >> n;

  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  sort(a.begin(), a.end());

  cin >> t;
  while (t--) {
    int x, l(0), r(n - 1);
    cin >> x;
    bool found(false);

    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (a[mid] == x) {
        found = true;
        break;

      } else if (a[mid] <= x)
        l = mid + 1;
      else
        r = mid - 1;
    }

    if (found)
      cout << "Y\n";
    else
      cout << "N\n";
  }
  return 0;
}
