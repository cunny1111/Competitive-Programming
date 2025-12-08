#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define int long long
using namespace std;

int divc(int n) {
  int res(0);
  for (int i(1); i * i <= n; i++) {
    if (n % i == 0) {
      res++;
      if (i != n / i)
        res++;
    }
  }
  return res;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;

  cout << divc(n);

  return 0;
}
