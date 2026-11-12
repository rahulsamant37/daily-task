/*
Author: Rahul Samant
Created: 2026-11-12 20:21:50
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

template<typename T>
void show_all(std::string_view rem, const T& v)
{
    std::cout << rem << ": ";
    for (const auto& e : v)
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

    vi h(n);
    for (auto &x : h) cin >> x;

    sort(all(h));

    vi left, mid, right;

    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && h[j] == h[i]) j++;

        int cnt = j - i;

        left.pb(h[i]);

        if (cnt >= 2)
            right.pb(h[i]);

        rep(k, 2, cnt)
            mid.pb(h[i]);

        i = j;
    }

    reverse(all(right));

    vi ans;
    for (int x : left) ans.pb(x);
    for (int x : mid) ans.pb(x);
    for (int x : right) ans.pb(x);

    cout << sz(left) + sz(right) << endl;

    for (int x : ans)
        cout << x << " ";
    cout << endl;
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
