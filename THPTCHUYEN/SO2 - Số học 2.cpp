#pragma GCC optimize("O3")
// #pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int long long
#define ____Miyuki____ signed main()
#define bliss return 0
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
using namespace std;

int divs(int n) {
    int res(0);
    for (int i(1); i * i <= n; i++) {
        res += (i + n / i) * (n % i == 0);
        if (i * i == n) res -= i;
    }
    return res;
}

____Miyuki____ {

    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    cout << divs(n);

    bliss;
}

