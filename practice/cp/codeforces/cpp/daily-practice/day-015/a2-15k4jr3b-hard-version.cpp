
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

    vi a(n);
    ll sm = 0;

    rep(i, 0, n) {
        cin >> a[i];
        sm += (1LL << a[i]);
    }

    ll cp = sm / 2;
    ll cur = 0;

    sort(all(a));

    for (int i = n - 1; i >= 0; i--) {
        if (cur + (1LL << a[i]) <= cp) {
            cur += (1LL << a[i]);
        }
    }

    ll rest = sm - cur;

    cout << rest * cur << endl;
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

