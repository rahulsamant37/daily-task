/*
Author: Rahul Samant
Created: 2026-09-29 13:10:45
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
    vi arr(n);
    rep(i, 0, n) cin >> arr[i];
    bool found_one_l = false, found_one_r = false;
    int l = 0, r = n-1;
    while (l<=r) {
        if (arr[l]==1) {
            found_one_l=true;
        } else if (arr[l]==-1) {
            if (found_one_l==false) {
                arr[l]=1;
            } else {
                arr[l]=0;
            }
        }
        l++;
        if (arr[r]==1) {
            found_one_r=true;
        } else if (arr[r]==-1) {
            if (found_one_r==false) {
                arr[r]=1;
            } else {
                arr[r]=0;
            }
        }
        r--;
    }
    for (int i: arr) {
        cout << i << " ";
    }
    cout << endl;
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
