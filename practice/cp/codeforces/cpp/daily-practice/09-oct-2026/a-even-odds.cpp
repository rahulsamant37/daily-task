/*
Author: Rahul Samant
Created: 2026-10-09 16:09:07
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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

const ll MOD = 1'000'000'007LL;
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

    ll n, k, res;
    cin >> n >> k;

    if (n % 2 == 0) {
        if (k <= n / 2) {
            res = 2 * k - 1;
        } else {
            res = 2 * k - n;
        }
    } else {
        if (k <= (n + 1) / 2) {
            res = 2 * k - 1;
        } else {
            res = 2 * k - (n + 1);
        }
    }

    cout << res << '\n';
    return 0;
}
