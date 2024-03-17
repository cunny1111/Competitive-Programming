#pragma GCC optimize("O3")
// #pragma GCC target("avx,avx2,fma")
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
    
    int n, c(0), k, a[1000];
    cin >> n >> k;
 
    a[0] = -1;
    souls(i, 1, n) cin >> a[i];
    while (k > 0 && a[k] == 0) k--;
    while (k+1 <= n && a[k+1] == a[k]) k++;
    cout << k;
 
    bliss;
}
