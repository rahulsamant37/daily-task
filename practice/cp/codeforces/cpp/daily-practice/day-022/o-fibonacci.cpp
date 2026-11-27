/*
Problem: O. Fibonacci
Contest: Codeforces - Sheet #3 (Arrays)
URL: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
Time limit: 1000
Memory limit: 256
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

long long fibMemo(int n, std::vector<long long>& memo) {
    if (n <= 2) {
        return n-1;
    }
    if (memo[n] != -1) {
        return memo[n];
    }
    memo[n] = fibMemo(n - 1, memo) + fibMemo(n - 2, memo);
    return memo[n];
}


int main() {
    setup_io();
    int n;
    cin >> n;
    vll memo(n + 1, -1);
    cout << fibMemo(n, memo);
    return 0;
}
