#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, c(0);
  cin >> n;

  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  sort(a.begin(), a.end());
  for (int i(0); i < n - 2; i++) {
    for (int j(i + 1); j < n - 1; j++) {

      int l(j + 1), r(n - 1), pos(-1);

      while (l <= r) {
        int mid = l + (r - l) / 2;

        if (a[mid] < a[i] + a[j]) {
          pos = mid;
          l = mid + 1;
        } else
          r = mid - 1;
      }

      if (pos != -1)
        c += (pos - j);
    }
  }

  cout << c;

  return 0;
}
