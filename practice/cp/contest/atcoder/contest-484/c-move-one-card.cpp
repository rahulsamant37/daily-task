/*
Author: Rahul Samant
Created: 2026-11-14 18:35:51
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

    vi a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    int l = 0, r = n - 1;

    while (l < n && a[l] == b[l]) l++;
    while (r >= 0 && a[r] == b[r]) r--;

    if (l == n) {
        cout << "Yes" << endl;
        return 0;
    }

    bool left = (a[l] == b[r]);
    bool right = (a[r] == b[l]);

    for (int i = l; i < r; i++) {
        if (a[i + 1] != b[i]) left = false;
        if (a[i] != b[i + 1]) right = false;
    }

    cout << (left || right ? "Yes" : "No") << endl;
    return 0;
}
