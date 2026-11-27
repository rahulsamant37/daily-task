/*
Problem: B. Grapefruit Juice
Contest: Codeforces - Codeforces Round 1138 (Div. 3)
URL: https://codeforces.com/contest/2292/problem/B
Time limit: 2000
Memory limit: 256
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
    int n, k, p;
    cin >> n >> k >> p;
    vll arr(n);
    ll res_a = 0, res_b = 0;
    rep(i, 0, n) {
        cin >> arr[i];
        res_a += arr[i];
    }
    sort(arr.begin(), arr.end());
    res_b = res_a;
    for (int i = 0; i + k <= n; i += k) {
        ll sum = 0;
        rep(j, i, i + k) {
            sum += arr[j];
        }
        res_b += p - sum;
        res_a = max(res_a, res_b);
    }
    cout << res_a << endl;
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
