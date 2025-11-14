#include <bits/stdc++.h>
using namespace std;

// ---------- Macros ----------
#define inp(x) int x; cin >> x
#define iarr(arr, size)  int arr[size]; fr(i, 0, size) cin >> arr[i]; 
#define ivec(v, size) vector<int>v; fr(i, 0, size) {int x; cin >> x; v.pb(x);}
#define newline cout << endl;
#define fr(i,a,b) for (int i = (a); i < (b); i++)
#define frr(i,a,b) for (int i = (a); i >= (b); i--)
#define test int TTT; cin >> TTT; while (TTT--)
#define ttest int TTT; cin >> TTT; for (int lll = 0; lll < TTT; lll++) { cout << "Case " << lll+1 << ": ";
#define endl "\n"
#define space << " " <<
#define endspace << " "
#define decimal(x) fixed << setprecision(x)
#define pb push_back
#define debug(arr) for (auto it : arr) cout << it << " "; cout << endl;
#define debugarr(arr, size) for (int i = 0; i < size; i++) cout << arr[i] << " "; cout << endl;
#define yes cout << "YES\n"
#define no cout << "NO\n"

// ---------- Type Aliases ----------
using ll   = long long;
using ull  = unsigned long long;
using ld   = long double;
using pii  = pair<int,int>;
using pll  = pair<long long,long long>;

// ---------- Constants ----------
const ll MOD = 1e9+7;
const ll INF = 1e18;

// ---------- IO ----------
void setupIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// ---------- Main ----------


int main() {
    //setupIO();
    fastIO();
    
    //cout << "Hello world\n";
    return 0;
}
