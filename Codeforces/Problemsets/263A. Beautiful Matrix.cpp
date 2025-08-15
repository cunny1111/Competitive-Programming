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

    int ass(1), anchor[2] = {0, 0}, x(1), y(1);
    while (ass <= 25) {
        if (x > 5) x = 1;
        if (y > 5) y = 1;

        int j;
        cin >> j;

        if (j == 1) {
            anchor[0] = x;
            anchor[1] = y;
        } 
        ass++; x++;
        if ((ass - 1) % 5 == 0) y++;
    }

    int c(0), ans(0);
    ans += abs(anchor[0] - 3);
    ans += abs(anchor[1] - 3);

    cout << ans;

    bliss;
}

