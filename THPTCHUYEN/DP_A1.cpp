#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

const int mod(1e9 + 7);
const int max_n(1e6);
vector<int> a(max_n + 1);

void fib() {
  a[1] = 1;

  if (max_n >= 2)
    a[2] = 1;

  for (int i(3); i <= 1000006; i++) {
    a[i] = (a[i - 1] + a[i - 2]) % mod;
  }
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  fib();

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    cout << a[n] << "\n";
  }

  return 0;
}
