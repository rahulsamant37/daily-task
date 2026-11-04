/*
Author: Rahul Samant
Created: 2026-11-04 21:03:06
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
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define endl '\n'

#ifdef LOCAL
#define debug(x) cerr << "[DEBUG] " << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

const int MOD = 1e9 + 7;
const ll INF = 1e18;

template <typename T> void show_all(std::string_view rem, const T &v) {
    std::cout << rem << ": ";
    for (const auto &e : v)
        std::cout << e << ' ';
    std::cout << '\n';
}

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

    vi d(n + 1, 0);

    int m = 0;
    if (n % 4 == 0)
        m = n;
    else if (n % 4 == 1)
        m = 1;
    else if (n % 4 == 2)
        m = n + 1;

    int p = 1;
    while ((p << 1) <= n)
        p <<= 1;

    for (int i = p; i >= 1; i >>= 1) {
        if (!(m & (i << 1))) {
            d[i] = 1;
            m ^= i ^ (i << 1);
        }
    }

    rep(i, 1, n + 1) { cout << d[i] << " \n"[i == n]; }
}

int main() {
    setup_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
