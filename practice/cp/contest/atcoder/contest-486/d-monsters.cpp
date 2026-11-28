/*
Problem: D - Monsters
Contest: AtCoder - AtCoder Beginner Contest 486
URL: https://atcoder.jp/contests/abc486/tasks/abc486_d
Time limit: 2000
Memory limit: 1024
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

int main() {
    setup_io();
    int n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (auto &[l, p] : a)
        cin >> l >> p;
    auto [target_l, target_p] = a.back();
    if (target_l > n) {
        cout << -1 << endl;
        return 0;
    }
    vll dp(target_l + 1, INF);
    dp[1] = 0;
    rep(i, 0, n-1) {
        auto [l, p] = a[i];

        for (ll j = min(target_l - 1, (ll)i + 1); j >= l; j--) {
            if (dp[j] != INF)
                dp[j+1] = min(dp[j+1], dp[j] + p);
        }
    }
    if (dp[target_l] == INF)
        cout << -1 << endl;
    else
        cout << dp[target_l] + target_p << endl;
    return 0;
}
