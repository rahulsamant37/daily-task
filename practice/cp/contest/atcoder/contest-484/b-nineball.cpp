/*
Author: Rahul Samant
Created: 2026-11-14 17:51:00
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
    int k, lowest_num = 9;
    cin >> k;
    vi arr(k);
    bool found_nine = false;
    rep(i, 0, k) {
        cin >> arr[i];
        if (arr[i] == 9) {
            found_nine = true;
        }
        if (arr[i] < lowest_num) {
            lowest_num = arr[i];
        }
    }
    if(!found_nine) {
        cout << -1;
    } else {
        cout << lowest_num;
    }
    return 0;
}
