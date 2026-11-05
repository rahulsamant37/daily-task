/*
Author: Rahul Samant
Created: 2026-10-30 16:07:25
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

int main() {
    setup_io();
    int n, k;
    cin >> n >> k;
    vll arr(n);
    rep(i, 0, n) cin >> arr[i];
    sort(arr.begin(), arr.end());
    if (k == 0) {
        if (arr[0] == 1) {
            cout << -1;
        } else {
            cout << 1;
        }
    } else if (arr[k - 1] == arr[k]) {
        cout << -1;
    } else {
        if (arr[k-1]>=1e9) {
            cout << 1000000000;
        } else {
            cout << arr[k - 1];
        }
    }
    return 0;
}
