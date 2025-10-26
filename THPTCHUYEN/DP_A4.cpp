#pragma GCC optimize("O3")
// #pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int long long
#define ____Miyuki____ signed main()
#define bliss return 0
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
using namespace std;

____Miyuki____ {

    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, t;
    cin >> n;

    int a[n];
    for (int &x : a) cin >> x;

    cin >> t;
    while (t--) {
        int l, r, res(0);
        cin >> l >> r;
        for (int i(l - 1); i < r; i++) res += a[i];
        cout << res<< "\n";
    }

    bliss;
}

