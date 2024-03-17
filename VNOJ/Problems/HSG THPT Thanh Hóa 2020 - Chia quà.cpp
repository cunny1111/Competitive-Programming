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

int X, Y;
int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int countdiv(int n) {
    int count = 0;
    souls(i, 1, sqrt(n)) {
        if (n % i == 0) {
            if (n / i == i) count++;
            else count += 2;
        }
    }
    return count;
}

___Zawajiro___ {
    file("CAU1")
    scanf("%lld %lld", &X, &Y);
    printf("%lld", countdiv(gcd(X, Y)));

    bliss;
}
