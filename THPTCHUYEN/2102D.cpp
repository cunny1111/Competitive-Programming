#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, m;
vector<int> a(n);

bool check(int h) {
  int s(0);
  for (int i(0); i < n; i++) {
    if (a[i] > h) s += a[i] - h;
  }
  return s >= m;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> m;

  a.resize(n);
  int maxh(0);
  for (int i(0); i < n; i++) {
    cin >> a[i];
    maxh = max(maxh, a[i]);
  }

  int l(0), r(maxh), res(0);
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (check(mid)) {
      res = mid;
      l = mid + 1;
    }
    else r = mid - 1;
  } 

  cout << res;

  return 0;
}
