#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool check(int d, int m, int n, const vector<int>& a) {
    int placed(1), last_pos(a[0]);
    for (int i(1); i < n; i++) {
        if (a[i] - last_pos >= d) {
            placed++;
            last_pos = a[i];

            if (placed == m) return true;
        }
    }
    return false;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  for (int &x : a) cin >> x;

  sort(a.begin(), a.end());
  int l(1), r = a[n - 1] - a[0], res(0);
  while (l <= r) {
    int mid(l + (r - l) / 2);
    if (check(mid, m, n, a)) {
        res = mid;
        l = mid + 1;
    }
    else r = mid - 1;
  }

  cout << res;

  return 0;
}
