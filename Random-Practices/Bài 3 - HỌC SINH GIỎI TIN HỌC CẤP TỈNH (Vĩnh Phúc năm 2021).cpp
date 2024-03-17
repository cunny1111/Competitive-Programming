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
    
    int n, k, u, v, l, r;

    cin >> n >> k >> u >> v >> l >> r;
    int a[n];
    souls(i, 1, n) {
        a[i] = i;        
    }

    souls(i, 1, k) {
        int l1 = u;
        int r1 = v;
        int l2 = l;
        int r2 = r;
        while (l1 < r1) {
            swap(a[l1], a[r1]);
            l1++;
            r1--;
        }
        while (l2 < r2) {
            swap(a[l2], a[r2]);
            l2++;
            r2--;
        }
    }

    souls(i, 1, n) {
        cout << a[i] << " ";
    }

    bliss;
}
