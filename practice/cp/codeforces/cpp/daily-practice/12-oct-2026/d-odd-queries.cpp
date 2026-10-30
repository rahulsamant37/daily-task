/*
Author: Rahul Samant
Created: 2026-10-12 09:15:35
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
#define rep(i, a, b) for(int i = (a); i <= (b); ++i)
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
    ll n, q, sum ;
    cin >> n >> q;
    vector<ll> arr(n+1), prefix(n+1, 0);
    rep(i , 1, n) {cin >> arr[i]; prefix[i] = arr[i] + prefix[i-1];}
    sum = prefix[n];
    while (q--) {
        ll l, r, k;
        cin >> l >> r >> k;
        ll rangeSum = prefix[r] - prefix[l-1];
        ll temp = sum - rangeSum + (r-l+1)*k;
        cout << (temp%2!=0 ? "YES" : "NO") << endl;
    }
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
