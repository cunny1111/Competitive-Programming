#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, q;
  cin >> n;

  vector<int> a(n);
  for (int &x : a) cin >> x;

  sort(a.begin(), a.end());

  cin >> q;
  while (q--) {
    int x;
    cin >> x;

    int l(0), r(n - 1), res(2e9);
    while (l <= r) {
        int mid(l + (r - l) / 2);
        int curr(abs(a[mid] - x));

        if (curr < res) res = curr;
        if (curr == 0) break;

        if (a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    cout << res << "\n";
  }

  return 0;
}
