#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int &x : a) cin >> x;

  sort(a.begin(), a.end());

  int side1(0), side2(0);
  for (int i(n - 1); i > 0; i--) {
    if (a[i] == a[i - 1]) {
        if (side1 == 0) side1 = a[i];
        else {
            side2 = a[i];
            break;
        }
        i--;
    }
  }

  if (side1 > 0 and side2 > 0) cout << side1 * side2;
  else cout << 0;

  return 0;
}
