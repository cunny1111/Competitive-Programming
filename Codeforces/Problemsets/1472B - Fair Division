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

    long long t, n, a;
    cin >> t;

    while(t--) {
        int x(0), s(0), one(0);
        cin >> n;
        ligma(i, n) {
            cin >> a;
            if (a == 1) {
                one++;
                s++;
            }
            else s += 2;
        }
        if (s % 2 == 0) {
            x = s / 2;
            if (x % 2 == 0) {
                cout << "YES\n";
            }
            else {
                if(one) {
                    cout << "YES\n";
                }
                else cout << "NO\n";
            }
        }
        else cout << "NO\n";
    }

    bliss;
}
