#include<bits/stdc++.h>
#define ll long long
const ll MOD = 1e9+7;
using namespace std;

ll big_mod(ll a, ll b) {
    if (b == 0) return 1;

    if (b % 2 == 0) {
        ll ret = big_mod(a, b / 2);
        return (ret * ret) % MOD;
    } else {
        ll ret = (big_mod(a, b - 1) * a) % MOD;
        return ret;
    }
}
