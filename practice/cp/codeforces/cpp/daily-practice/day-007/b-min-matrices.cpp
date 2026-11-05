/*
Author: Rahul Samant
Created: 2026-10-11 17:27:13
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
    int n, k;
    cin >> n >> k;
    if (k<n || k>=2*n) {cout << -1 << endl; return;}
    int top = 2*n - k - 1;
    int nxt = 0;
    int cur = n+1;
    for (int i = 0; i<n; i++) {
        for (int j =0; j<n; j++) {
            if (i == min(top, nxt) && j == nxt) {
                nxt++;
                cout << nxt << ' ';
            } else {
                cout << cur << ' ';
                cur++;
            }
        }
        cout << endl;
    }
    return;
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
