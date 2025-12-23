#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

int bs(int v, const vector<int>& a) {
    int l(0), r(a.size() - 1), res(a.size());
    while (l <= r) {
        int mid(l + (r - l) / 2);
        if (a[mid] >= v) {
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int m, n, k, c(0);
  cin >> m >> n >> k;

  vector<int> a(m);
  vector<int> b(n);
  for (int &x : a) cin >> x;

  sort(a.begin(), a.end());
  for (int &x : b) {
    cin >> x;

    if (x == 0) {
        if (k == 0) c += m;
        continue;
    }
    else {
        if (k % x == 0) {
            int target(k / x);

            int pos1(bs(target, a)), pos2(bs(target + 1, a));
            c += (pos2 - pos1);
        }
    }
  }

/*
  for (int &x : a) cerr << x << " ";
  cerr << "\n";
  for (int &x : b) cerr << x << " ";
  cerr << "\n";
*/
  
  cout << c;

  return 0;
}
