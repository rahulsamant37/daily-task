/*
Author: Rahul Samant
Created: 2026-07-26 22:19:50
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
    int n, k;
    cin >> n >> k;
    
    if (k == n - 1) {
        cout << -1 << endl;
        return;
    }
    
    int c = n - k;
    int cnt1 = (n + 1) / 2;
    int cnt0 = n / 2;
    
    int bA = (c + 1) / 2;
    int bB = c / 2;
    
    string s;
    s.reserve(n);
    for (int i = 0; i < c; ++i) {
        if (i % 2 == 0) {
            int len = 1;
            if (i == 0) len = cnt1 - bA + 1;
            s.append(len, '1');
        } else {
            int len = 1;
            if (i == 1) len = cnt0 - bB + 1;
            s.append(len, '0');
        }
    }
    cout << s << endl;
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
