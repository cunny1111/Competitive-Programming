#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int long long
#define ligma(i, n) for (int i = 0; i < (n); i++)
#define souls(i, a, b) for (int i = (a); i <= (b); i++)
#define despairs(i, a, b) for (int i = (a); i >= (b); i--)
#define all(x) (x).begin(), (x).end()
#define ___Zawajiro___ signed main()
#define bliss return 0
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
using namespace std;

int cd(int n) {
    int c = 0;
    souls(i, 1, sqrt(n)) {
        if (n % i == 0) {
            if (n / i == i) c++;
            else c += 2;
        }
    }
    return c;
}

___Zawajiro___ {
    int n;
    scanf("%lld", &n);
    printf("%lld", cd(n));

    bliss;
}
