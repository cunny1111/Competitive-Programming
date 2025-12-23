#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int n) {
    return n * n * n - 2 * n + 5;
}

void solve(int k) {
    int l(1), r(2000000);
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (k == f(mid)) {
        cout << mid << "\n";
        return;
      }
      if (f(mid) < k) l = mid + 1;
      else r = mid - 1;
    }
    cout << "-1\n";
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int q, k;
  cin >> q;

  while (q--) {
    cin >> k;
    solve(k);
  }

  return 0;
}
