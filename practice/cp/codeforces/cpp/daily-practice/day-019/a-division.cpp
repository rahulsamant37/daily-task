/*
Problem: A. Division?
Contest: Codeforces - Codeforces Round 784 (Div. 4)
URL: https://codeforces.com/problemset/problem/1669/A
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

void solve() {
    int n;
    cin >> n;
    if (n<=1399) {
        cout << "Division 4" << endl;
        return;
    } else if (1400<=n && n<=1599) {
        cout << "Division 3" << endl;
        return;
    } else if (1600<=n && n<=1899) {
        cout << "Division 2" << endl;
        return;
    } else if (n>=1900) {
        cout << "Division 1" << endl;
        return;
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
