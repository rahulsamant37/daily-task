
/*
Author: Rahul Samant
Created: 2026-11-11 21:02:25
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

    vll a(n);
    for (auto &x : a) cin >> x;

    int m = n / 2;

    pair<ll, int> dp[2] = {{0, 0}, {0, 1}};

    for (int i = 1; i < m; i++) {
        ll same = abs(a[i - 1] - a[i])
                + abs(a[n - i] - a[n - 1 - i]);

        ll cross = abs(a[i - 1] - a[n - 1 - i])
                 + abs(a[n - i] - a[i]);

        pair<ll, int> ndp[2] = {
            {-1, INT_MAX}, {-1, INT_MAX}
        };

        for (int s = 0; s < 2; s++) {
            for (int p = 0; p < 2; p++) {
                ll val = dp[p].first
                       + (s == p ? same : cross);

                int cnt = dp[p].second + s;

                if (val > ndp[s].first ||
                   (val == ndp[s].first &&
                    cnt < ndp[s].second)) {
                    ndp[s] = {val, cnt};
                }
            }
        }

        dp[0] = ndp[0];
        dp[1] = ndp[1];
    }

    pair<ll, int> ans = dp[0];

    if (dp[1].first > ans.first ||
       (dp[1].first == ans.first &&
        dp[1].second < ans.second)) {
        ans = dp[1];
    }

    ans.first += abs(a[m - 1] - a[m]);

    if (n % 2 == 1) {
        ans.first += abs(a[m] - a[m + 1]);
    }

    cout << ans.first << " " << ans.second << endl;
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

