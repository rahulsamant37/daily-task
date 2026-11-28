/*
Problem: B - Player Substitution
Contest: AtCoder - AtCoder Beginner Contest 486
URL: https://atcoder.jp/contests/abc486/tasks/abc486_b
Time limit: 2000
Memory limit: 1024
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
    int n, m;
    cin >> n >> m;
    vi arr(n);
    rep(i, 0, n) cin >> arr[i];
    while (m--) {
        int x, y;
        cin >> x >> y;
        replace(arr.begin(), arr.end(), x, y);
    }
    sort(arr.begin(), arr.end());
    rep(i, 0, n) cout << arr[i] << " ";
    return 0;
}
