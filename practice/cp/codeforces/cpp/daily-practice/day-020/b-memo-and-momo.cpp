/*
Problem: B. Memo and Momo
Contest: Codeforces - Contest #1
URL: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
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

int main() {
    setup_io();
    ll a, b, k;
    cin >> a >> b >> k;
    if (a%k==0 && b%k==0) {
        cout << "Both";
    } else if (a%k==0) {
        cout << "Memo";
    } else if (b%k==0) {
        cout << "Momo";
    } else {
        cout << "No One";
    }
    return 0;
}
