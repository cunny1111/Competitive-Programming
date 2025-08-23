#pragma GCC optimize("O3")
// #pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
// #define int long long
#define ____Miyuki____ signed main()
#define bliss return 0
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
using namespace std;

____Miyuki____ {

    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x, o(0), c(0);
    cin >> x;

    while (x > o) {
        if (x - o >= 5) {
            o += 5;
            c++;
        }
        else if (x - o == 4) {
            o += 4;
            c++;
        }
        else if (x - o == 3) {
            o += 3;
            c++;
        }
        else if (x - o == 2) {
            o += 2;
            c++;
        }
        else if (x - o == 1) {
            o += 1;
            c++;
        }
    }

    cout << c;
    
    bliss;
}

