#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool check(int mid, int n, int k) {
    int nope(mid - (mid / n));
    return nope >= k;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, k;
  cin >> n >> k;

  int l(1), r(2e18), c(0);
  while(l <= r) {
    int mid(l + (r - l) / 2);
    if (check(mid, n, k)) {
        c = mid;
        r = mid - 1;
    }
    else l = mid + 1;
  }
  
  cout << c;

  return 0;
}
