#pragma GCC optimize("O3", "unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool check(int target, int n, int m, const vector<int>& a, const vector<int>& b) {
    int pidx(0);
    for (int i(0); i < n; i++) {
      if (a[i] >= target) continue;

      bool fx(false);
      while (pidx < m) {
        if (a[i] + b[pidx] >= target) {
          fx = true;
          pidx++;
          break;
        }
        else pidx++;
      }
      if (!fx) return false;
    }
    return true;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<int> a(n);
  int mina(2e9);
  for (int &x : a) {
    cin >> x;
    if (x < mina) mina = x;
  }

  int m;
  cin >> m;
  
  vector<int> b(m);
  for (int &x : b) cin >> x;

  int l(mina), r(2000000000);
  int res(l);
  while(l <= r) {
    int mid(l + (r - l) / 2);
    if (check(mid, n, m, a, b)) {
      res = mid;
      l = mid + 1;
    }
    else r = mid - 1;
  }

  cout << res;

  return 0;
}
