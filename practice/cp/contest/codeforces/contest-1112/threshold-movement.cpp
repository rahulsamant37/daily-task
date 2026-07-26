/*
Author: Rahul Samant
Created: 2026-07-26 22:17:00
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define sz(x) (int)(x).size()
#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define endl '\n'

#ifdef LOCAL
#define debug(x) cerr << "[DEBUG] " << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void setup_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

void solve() {
    int n;
    cin >> n;
    vi w(n);
    rep(i, 0, n) cin >> w[i];
    
    if (n % 2 != 0) {
        cout << "NO" << endl;
        return;
    }
    
    int min_odd = 2e9 + 7;
    int max_even = -1;
    
    rep(i, 0, n) {
        if (i % 2 == 0) {
            min_odd = min(min_odd, w[i]);
        } else {
            max_even = max(max_even, w[i]);
        }
    }
    
    if (min_odd - max_even >= 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    setup_io();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
