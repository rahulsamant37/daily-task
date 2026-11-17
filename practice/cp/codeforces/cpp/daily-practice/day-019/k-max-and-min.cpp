/*
Problem: K. Max and Min
Contest: Codeforces - Sheet #1 (Data type - Conditions)
URL: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
Time limit: 250
Memory limit: 64
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
    int a, b, c;
    cin >> a >> b >> c;
    // int max = (a >b) ? ((a>c) ? a : c) : ((b >c) ? b :c);
    int max_num = max({a, b, c});
    int min_num = min({a, b, c});
    cout << min_num << " " << max_num;
    return 0;
}
