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

    int n, a(0), b(0), c(0);
    cin >> n;

    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        a += x;
        b += b;
        c += z;
    }

    if (a == 0 and b == 0 and c == 0) cout << "YES";
    else cout << "NO";

    bliss;
}

