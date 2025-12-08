#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i(0); i < n; i++) {
    cin >> a[i];
    if (a[i] & 1)
      a[i]++;
    else
      a[i] = a[i] >> 1;
  }

  sort(a.begin(), a.end());
  for (int i(0); i < n; i++)
    cout << a[i] << " ";

  return 0;
}
