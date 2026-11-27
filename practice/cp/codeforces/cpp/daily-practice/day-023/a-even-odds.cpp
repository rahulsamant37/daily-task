/*
Problem: A. Even Odds
Contest: Codeforces - Codeforces Round 188 (Div. 2)
URL: https://codeforces.com/problemset/problem/318/A
Time limit: 1000
Memory limit: 256
*/
#include <bits/stdc++.h>
#include <pthread.h>
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
    ll n, k;
    cin >> n >> k;
    if (n%2==0) {
        if (k<=n/2) {
            ll res = 2*k;
            cout << res-1;
        } else {
            ll res = 2*k;
            cout << res-n;
        }
    } else {
        if (k<=(n+1)/2) {
            ll res = 2*k;
            cout << res-1;
        } else {
            ll res = 2*k;
            cout << res - n - 1;
        }
    }
    return 0;
}
