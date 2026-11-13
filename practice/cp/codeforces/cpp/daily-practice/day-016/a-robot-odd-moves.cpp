/*
Author: Rahul Samant
Created: 2026-11-13 06:20:02
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

bool check_sol(int x, int y, int a, int b) {
    if (x==a && y==b) {
        return true;
    } else {
        return false;
    }
}

void solve() {
    int a, b, x=0, y=0, steps=0;
    cin >> a >> b;
    while(x<=a) {
        if (check_sol(x, y, a, b)) {
            cout << steps << endl;
            return;
        }
        if (y>b) {
            y--;
        } else {
            y++;
        }
        steps++;
        if (check_sol(x, y, a, b)) {
            cout << steps << endl;
            return;
        }
        x++;
        if (check_sol(x, y, a, b)) {
            cout << steps << endl;
            return;
        }
        
    }
    if (x==a && y==b) {
        cout << steps << endl;
    } else {
        cout << -1 << endl;
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
