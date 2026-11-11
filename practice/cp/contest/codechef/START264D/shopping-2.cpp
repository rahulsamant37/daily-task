/*
Author: Rahul Samant
Created: 2026-11-11 20:06:34
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
    int n, d;
    cin >> n >> d;

    vector<int> a(n), b(n);

    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;

    int sumA = 0, sumB = 0, sumMin = 0;

    for (int i = 0; i < n; i++) {
        sumA += a[i];
        sumB += b[i];
        sumMin += min(a[i], b[i]);
    }

    int ans = min({d + sumA, d + sumB, 2 * d + sumMin});

    cout << ans << '\n';
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
