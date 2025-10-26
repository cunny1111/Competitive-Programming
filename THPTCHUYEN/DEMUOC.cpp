#pragma GCC optimize("O3")
// #pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int long long
#define ____Miyuki____ signed main()
#define bliss return 0
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
using namespace std;

const int maxn(1e6);

vector<int> primes;
vector<bool> isPrime;

void sieve() {
    isPrime.assign(maxn + 1, 1);
    isPrime[0] = isPrime[1] = false;
    for (int i(2); i <= maxn; i++) {
        if (!isPrime[i]) continue;
        primes.emplace_back(i);
        for (int j = i + i; j <= maxn; j += i) isPrime[j] = false;
    }
}

int divc(int n) {
    if (n == 1) return 1;
    vector<int> powv;
    for (auto p : primes) {
        int cnt(0);
        while (n % p == 0) {
            n /= p;
            cnt++;
        }
        if (cnt) powv.emplace_back(cnt);
    }
    if (n != 1) powv.emplace_back(1);
    int res(1);
    for (auto i : powv) res *= (i + 1);
    return res;
}

____Miyuki____ {

    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    sieve();
    int n;
    cin >> n;

    cout << divc(n);

    bliss;
}