/*
Author: Rahul Samant
Created: 2026-07-26 22:21:21
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
    vi l(n), r(n), u(n), v(n);
    rep(i, 0, n) {
        cin >> l[i] >> r[i] >> u[i] >> v[i];
    }
    
    for (int m = n; m >= 1; --m) {
        int cur = 0;
        bool possible = true;
        for (int j = 1; j <= m; ++j) {
            bool found = false;
            int right_rank = m - j + 1;
            while (cur < n) {
                int i = cur;
                cur++;
                if ((j < l[i] || j > r[i]) && (right_rank < u[i] || right_rank > v[i])) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << m << endl;
            return;
        }
    }
    cout << 0 << endl;
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
