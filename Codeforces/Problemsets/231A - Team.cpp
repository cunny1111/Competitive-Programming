#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
// #define int long long
#define ligma(i, n) for (int i = 0; i < (n); i++)
#define souls(i, a, b) for (int i = (a); i <= (b); i++)
#define despairs(i, a, b) for (int i = (a); i >= (b); i--)
#define all(x) (x).begin(), (x).end()
#define ___Zawajiro___ signed main()
#define bliss return 0
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
using namespace std; 
 
___Zawajiro___ {
    fastio;
    int a1, a2, a3, n, c(0);
    cin >> n;
 
    while (n--) {
        cin >> a1 >> a2 >> a3;
        if (a1 + a2 + a3 >= 2) c++;
    }
    cout << c;
    
    bliss;
}
