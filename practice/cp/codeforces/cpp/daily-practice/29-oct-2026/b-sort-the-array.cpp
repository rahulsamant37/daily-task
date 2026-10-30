/*
Author: Rahul Samant
Created: 2026-10-29 19:14:44
*/

#include <algorithm>
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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    rep(i, 0, n) cin >> arr[i];
    vector<ll> copy = arr;
    sort(copy.begin(), copy.end());
    if (is_sorted(arr.begin(), arr.end())) {
        cout << "yes" << endl;
        cout << 1 << " " << 1;
    } else {
        int l = 0, r = n-1;
        while (l<n-1 && arr[l]==copy[l]) {
            l++;
        }
        while (r>=0 && arr[r] == copy[r]) {
            r--;
        }
        reverse(arr.begin()+l, arr.begin() + r + 1);
        if (is_sorted(arr.begin(), arr.end())) {
            cout << "yes" << endl;
            cout << l+1 << " " << r + 1;
        } else {
            cout << "no";
        }
    }
    return 0;
}
